#ifndef MINISHELL_H
#define MINISHELL_H

// Public Lib
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>


// Private Lib
#include "tokenizer.h"
#include "../lib/headers/Lib.h"

// // Function to read user input from the command line using readline
// char* read_user_input(const char* prompt);

// // Function to tokenize the user input string into individual tokens
// char** tokenize_input(const char* input_str);

// // Function to execute a command, either a built-in command or an external command
// void execute_command(char** tokens);

// // Function to handle I/O redirection and pipelines
// int handle_redirection(char** tokens);

// // Function to handle built-in commands (e.g., cd, echo, exit)
// int handle_builtin_commands(char** tokens);

// // Function to execute an external command using execve
// void execute_external_command(char** tokens);

// // Function to handle environment variables (e.g., export, unset)
// int handle_environment_variables(char** tokens);

// // Function to manage background processes and job control
// void manage_background_processes(void);

// // Function to handle signals (e.g., Ctrl+C, Ctrl+Z)
// void handle_signals(void);

// // Function to free the memory used by the tokens array
// void free_tokens(char** tokens);

#endif // MINISHELL_H
