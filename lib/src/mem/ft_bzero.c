/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:04:02 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	This function it's included in <string.h>
*	The bzero() function writes n zeroed bytes to the string s.
*   If n is zero, bzero() does nothing.
*								PARAMETERS ✌🏼
*	s : The pointer from which to begin erasing data.
*	n : The number of bytes to erase.
*								RETURN VALUES 🤙🏼
*	- Nothing
*/

#include "../../headers/Lib.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
