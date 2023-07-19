/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:40:56 by omahdiou          #+#    #+#             */
/*   Updated: 2023/07/19 06:06:41 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    char *line;
    while(1)
    {
        line = readline("minishell % ");
        if(line)
            add_history(line);
        // printf("%s\n",line);
    }
}