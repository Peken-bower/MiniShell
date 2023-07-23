/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:23:11 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/23 15:17:23 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

char	*ft_uitoa(u_int64_t n)
{
	char	*nbr;
	int		i;

	i = ft_baselen(n, 10);
	nbr = malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (0);
	nbr[i] = '\0';
	while (n)
	{
		nbr[i - 1] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (nbr);
}
