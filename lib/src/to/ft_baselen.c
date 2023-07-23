/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_baselen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:09:55 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/04/15 21:28:43 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

u_int64_t	ft_baselen(u_int64_t nbr, int base)
{
	u_int16_t	i;

	i = 0;
	if (!nbr)
		i = 1;
	while (nbr)
	{
		nbr = nbr / base;
		i++;
	}
	return (i);
}
