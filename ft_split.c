/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-06-03 18:49:34 by jesequie          #+#    #+#             */
/*   Updated: 2026-06-03 18:49:34 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_str(char **str, size_t j)
{
	while (j--)
		free(str[j]);
	free (str);
	return (NULL);
}

static size_t	word_counts(const char *s, char c)
{
	size_t		i;
	size_t		count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**str;

	str = malloc(sizeof(char *) * (word_counts(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != c && s[i])
			i++;
		str[j++] = ft_substr(s, (unsigned int)start, (i - start));
		if (!str[j - 1])
			return (free_str(str, j));
	}
	str[j] = NULL;
	return (str);
}
