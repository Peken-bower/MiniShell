/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:43:02 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:47:04 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*                               DESCRIPTION 👆🏼
*   This function it's included in <ctype.h>
*   This function will check any character isalpha() or isdigit()
*   if true we will return true value if not we will return false. the value of
*   argument must be repsentable as an unsigned char or the Value of EOF
*                               PARAMETERS ✌🏼
*   c : is the character to test.
*                               RETURN VALUES 🤙🏼
*   The isalnum() function returns zero if the character test false and returns
*   non-zero if the character tests true.
*/

#include "../../headers/Lib.h"

int	ft_isalnum(int c)
{
	if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}
