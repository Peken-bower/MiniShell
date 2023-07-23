/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_push_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:10:44 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/07/20 10:12:26 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

// Add a new node to the back of the linked list
void l_push(t_list* list, const char* token)
{
    t_node* new_node = n_create(token);
    if (new_node == NULL) {
        // Handle memory allocation error
        return;
    }
    if (list->head == NULL) {
        list->head = new_node;
        list->tail = new_node;
    } else {
        list->tail->next = new_node;
        list->tail = new_node;
    }
}
