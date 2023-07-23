/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:23:48 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/07/22 17:59:50 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

int main()
{
    char* input_str;
    // Read user input using readline
    while (1)
    {
        input_str = readline("Enter command: ");
        if (input_str == NULL) {
            // Handle EOF (Ctrl+D) or other input errors
            printf("\n");
        }
        if (ft_strlen(input_str) > 0)
            // Add the input to the history for command recall using arrow keys
            add_history(input_str);
        printf("User input: %s\n", input_str);
    // Tokenize the input (you can use the previously explained tokenization logic here)
       t_list *tokens = tokenize_input(input_str);
       t_node *current = tokens->head;
       while (current)
       {
            printf("%s\n",current->token);
            current = current->next;
       }
    // ...
    }
    // Free the memory allocated by readline
    free(input_str);
    return 0;
}
