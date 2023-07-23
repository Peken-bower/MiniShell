/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:04:19 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	This function it's included in <string.h>
*	The memchr() function locates the first occurrence of c (converted to an
*	unsigned char) in string s.
*								PARAMETERS ✌🏼
*	s	: The pointer in which to check for the occurence of c.
*	c	: The character to check occurence of.
*	n	: The number of bytes to check for any occurence of c in s.
*								RETURN VALUES 🤙🏼
*	The memchr() function returns a pointer to the byte located, or NULL if no
*	such byte exists within n bytes.
*/

#include "../../headers/Lib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
