/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:06:15 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*								DESCRIPTION 👆🏼
* 	Applies the function ’f’ to each character of the ’s’ to create a new
*	string (with malloc) resulting from successive applications of ’f’.
*								PARAMETERS ✌🏼
*	#1. The string on which to iterate.
*	#2. The function to apply to each character.
*								RETURN VALUES 🤙🏼
*	The string created from the successive applications of ’f’.
*	Returns NULL if the allocation fails.
*/

#include "../../headers/Lib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
