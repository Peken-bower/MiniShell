/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_clear.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:10:50 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/07/20 10:12:18 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

void l_clear(t_list* list) {
    t_node* current = list->head;
    while (current != NULL) {
        t_node* next = current->next;
        free(current->token);
        free(current);
        current = next;
    }
    free(list);
}
