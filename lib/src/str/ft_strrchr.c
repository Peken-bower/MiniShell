/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:06:35 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	#include <string.h>
*	The strchr() function locates the last occurrence of c (converted to a
*	char) in the string pointed to by s. The terminating null character is
*	considered to be part of the string; therefore if c is `\0', the functions
*	locate the terminating `\0'.
*								PARAMETERS ✌🏼
*	#1. The string in which to check the occurence of c.
*	#2. The character to check the occurence of.
*								RETURN VALUES 🤙🏼
*	The function strrchr() returns a pointer to the located
*	character, or NULL if the character does not appear in the string.
*/

#include "../../headers/Lib.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
