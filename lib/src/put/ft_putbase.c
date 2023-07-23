/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:57:33 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/04/01 04:45:14 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/Lib.h"

void	ft_putbase(u_int64_t n, const char flag)
{
	if (n >= 16)
	{
		ft_putbase(n / 16, flag);
		ft_putbase(n % 16, flag);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
		{
			if (flag == 'x')
				ft_putchar((n - 10 + 'a'));
			if (flag == 'X')
				ft_putchar((n - 10 + 'A'));
		}
	}
}
