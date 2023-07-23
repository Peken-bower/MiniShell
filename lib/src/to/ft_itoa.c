/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:06:57 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/23 22:39:45 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	Allocates (with malloc) and returns a string representing the integer
*	received as an argument. Negative numbers must be handled.
*								PARAMETERS ✌🏼
*	#1. the integer to convert.
*								RETURN VALUES 🤙🏼
*	The string representing the integer. NULL if the allocation fails.
*/

#include "../../headers/Lib.h"

static int32_t	ft_negorpos(int32_t nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int32_t n)
{
	char	*res;
	int32_t	len;

	len = ft_nbrlen(n);
	res = malloc((len + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		len--;
		res[len] = ft_negorpos(n % 10) + 48;
		n /= 10;
	}
	return (res);
}
