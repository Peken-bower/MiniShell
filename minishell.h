/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omahdiou <omahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 02:41:52 by omahdiou          #+#    #+#             */
/*   Updated: 2023/07/19 06:03:30 by omahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define    MINISHELL_H

#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>

typedef struct s_node{
    int data;
    char *cmd;
    struct s_node *next;
}   t_node;

typedef struct s_list{
    t_node *head;
    int len;
}t_list;

#endif

    