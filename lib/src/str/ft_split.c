/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 01:05:23 by aelmrabe          #+#    #+#             */
/*   Updated: 2023/03/15 10:46:13 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns an array of strings obtained by
*	splitting ’s’ using the character ’c’ as a delimiter. The array must be
*	ended by a NULL pointer.
*	PARAMETERS
*	#1. The string to be split.
*	#2. The delimiter character.
*	RETURN VALUES
*	The array of new strings resulting from the split.
*	NULL if the allocation fails.
*/
/*
*								DESCRIPTION 👆🏼
*	This function it's included in <string.h>
*	The bzero() function writes n zeroed bytes to the string s.
*   If n is zero, bzero() does nothing.
*								PARAMETERS ✌🏼
*	s : The pointer from which to begin erasing data.
*	n : The number of bytes to erase.
*								RETURN VALUES 🤙🏼
*	- Nothing
*/

#include "../../headers/Lib.h"

static size_t	word_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s == 0)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		count++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *src, size_t n)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (n == 0)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (!dst)
		return (NULL);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**free_alloc(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	save;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str)
		return (NULL);
	while (i < word_count(s, c) && s[j])
	{
		while (s[j] == c)
			j++;
		save = j;
		while (s[j] != c && s[j])
			j++;
		str[i] = ft_strndup(&s[save], j - save);
		if (str[i++] == 0)
			return (free_alloc(str));
	}
	str[i] = NULL;
	return (str);
}
