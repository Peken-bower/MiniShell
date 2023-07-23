/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_create.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:10:41 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/07/20 10:14:08 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

// Create a new linked list node with the given token
t_node* n_create(const char* token) {
    t_node* new_node = (t_node*)malloc(sizeof(t_node));
    if (new_node == NULL) {
        // Handle memory allocation error
        return NULL;
    }
    new_node->token = strdup(token);
    new_node->next = NULL;
    return new_node;
}
