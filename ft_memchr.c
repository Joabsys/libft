/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:45:45 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 18:45:45 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*j;
	size_t				i;

	j = s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (j[i] == ch)
			return ((void *)(unsigned long)&j[i]);
		i++;
	}
	return (NULL);
}
