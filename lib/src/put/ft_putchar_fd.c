/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:04:57 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	Outputs the character ’c’ to the given file descriptor.
*								PARAMETERS ✌🏼
*	#1. The character to output.
*	#2. The file descriptor on which to write.
*								RETURN VALUES 🤙🏼
*	-
*/

#include "../../headers/Lib.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
