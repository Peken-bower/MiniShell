/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:20:09 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/06/23 07:33:07 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

/*
** ft_strcmp function
** ------------------
** Compares two strings `s1` and `s2` lexicographically.
**
** Parameters:
**   s1 - The first string to compare.
**   s2 - The second string to compare.
**
** Return:
**   An integer value less than, equal to,
**   or greater than 0 if `s1` is found to be
**   less than, equal to, or greater than `s2`, respectively.
**
** Notes:
**   - The comparison is done character by character
**        until a difference is found.
**   - The comparison is case-sensitive.
**   - Both strings must be null-terminated.
**   - The return value indicates the difference between `s1` and `s2`:
**       - 0 if both strings are equal.
**       - A positive value if `s1` is greater than `s2`.
**       - A negative value if `s1` is less than `s2`.
*/
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
