/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:04:47 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	This function it's included in <string.h>
*	The memset() function writes len bytes of value c (converted to an
*	unsigned char) to the string b.
*								PARAMETERS ✌🏼
*	#1. The destiny pointer in which to write.
*	#2. The character to write.
*	#3. The number of bytes to write.
*								RETURN VALUES 🤙🏼
*	The memset() function returns its first argument.
*/

#include "../../headers/Lib.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr;

	index = 0;
	ptr = (unsigned char *)str;
	while (index < n)
	{
		ptr[index] = (unsigned char)c;
		index++;
	}
	return (str);
}
