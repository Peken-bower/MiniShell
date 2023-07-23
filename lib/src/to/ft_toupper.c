/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:07:07 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
*	#include <ctype.h>
*	The toupper() function converts a lower-case letter to the corresponding
*	upper-case letter. The argument must be representable as an unsigned char
*	or the value of EOF.
*								PARAMETERS ✌🏼
*	#1. The character to convert.
*								RETURN VALUES 🤙🏼
*	If the argument is a lower-case letter, the toupper() function returns the
*	corresponding upper-case letter if there is one; otherwise, the argument is
*	returned unchanged.
*/

#include "../../headers/Lib.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - 32;
	return (c);
}
