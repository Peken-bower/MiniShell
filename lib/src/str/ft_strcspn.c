/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:19:56 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/06/23 07:33:46 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

/*
** ft_strcspn function
** --------------------
** Calculates the length of the initial segment of the string `s`
** that does not contain any character from the string `reject`.
**
** Parameters:
**   s      - The input string to search within.
**   reject - The string containing characters to be rejected.
**
** Return:
**   The length of the initial segment of `s`
**		without any characters from `reject`.
*/
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	count;
	size_t	reject_index;

	count = 0;
	while (s[count] != '\0')
	{
		reject_index = 0;
		while (reject[reject_index] != '\0')
		{
			if (s[count] == reject[reject_index])
				return (count);
			reject_index++;
		}
		count++;
	}
	return (count);
}
