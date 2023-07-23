/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:05:34 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	This function it's included in <string.h>
*	The strdup() function allocates sufficient memory for a copy of the string
*	s1, does the copy, and returns a pointer to it.
*								PARAMETERS ✌🏼
*	#1. The string to duplicate.
*								RETURN VALUES 🤙🏼
*	The strdup() function returns thE pointer to the copy of s1.
*/

#include "../../headers/Lib.h"

char	*ft_strdup(const char *src)
{
	char		*dst;
	size_t		len;

	len = ft_strlen(src) + 1;
	dst = malloc(len);
	if (!src)
		return (0);
	ft_memcpy(dst, src, len);
	return (dst);
}
