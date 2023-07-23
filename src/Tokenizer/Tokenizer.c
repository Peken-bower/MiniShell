#include "../../inc/minishell.h"

// Function to check if a character is a whitespace or a delimiter
static int is_delimiter(char c) {
    return c == ' ' || c == '\t' || c == '\r' || c == '\n';
}

// Function to tokenize the user input string into individual tokens
t_list* tokenize_input(const char* input_str)
{
    t_list* tokens = l_create();

    char* input_copy = strdup(input_str);
    char* token_start = NULL;
    char* current = input_copy;
    char quote = '\0';
    int in_quotes = 0;

    while (*current) {
        // Handle quotes
        if (*current == '\'' || *current == '\"') {
            if (in_quotes && *current == quote) {
                // Closing quote
                in_quotes = 0;
                *current = '\0'; // Null-terminate the token
                l_push(tokens, token_start);
            } else if (!in_quotes) {
                // Opening quote
                in_quotes = 1;
                quote = *current;
                token_start = current + 1;
            }
        } else if (*current == '\\' && in_quotes) {
            // Handle escape character within quotes
            if (*(current + 1) == quote || *(current + 1) == '\\') {
                // Escape the next character
                memmove(current, current + 1, strlen(current));
                current++;
            }
        } else if (!in_quotes && !is_delimiter(*current)) {
            // Handle regular tokens
            token_start = current;
            // Find the end of the token
            while (*current && !is_delimiter(*current) && *current != '\'' && *current != '\"')
                current++;

            if (*current) {
                // Null-terminate the token
                *current = '\0';
                l_push(tokens, token_start);
            }
        }

        if (*current)
            // Move to the next character after the token
            current++;
    }

    free(input_copy);
    return tokens;
}


/*
    the condition to make a tokenizer it's easy
    tokenizer :
        - check if it's a command;
        - check if it's a option;
        - check if it's a string;
    
*/
