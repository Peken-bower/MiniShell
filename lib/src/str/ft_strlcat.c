/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:05:56 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	#include <string.h>
*	strlcat() appends string src to the end of dst.  It will append at most
*	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
*	dstsize is 0 or the original dst string was longer than dstsize (in practice
*	this should not happen as it means that either dstsize is incorrect or that
*	dst is not a proper string).
*								PARAMETERS ✌🏼
*	#1. The destiny string in which to concatenate.
*	#2. The source string to concatenate.
*	#3. The total number of bytes in destiny.
*								RETURN VALUES 🤙🏼
*	the strlcat() function returns the length of the string it tried to create.
*/

#include "../../headers/Lib.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != 0 && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
