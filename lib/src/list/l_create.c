/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_create.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:10:47 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/07/20 10:11:45 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

// Create a new linked list
t_list* l_create(void) {
    t_list* list = (t_list*)malloc(sizeof(t_list));
    if (list == NULL) {
        // Handle memory allocation error
        return NULL;
    }
    list->head = NULL;
    list->tail = NULL;
    return list;
}
