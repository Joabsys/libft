/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 18:43:41 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 18:43:41 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	p;
	size_t	i;

	if (!*little)
		return ((char *)(unsigned long)big);
	p = 0;
	while (big[p] && p < len)
	{
		if (big[p] == little[0])
		{
			i = 1;
			while (little[i] && big[p + i] == little[i]
				&& (p + i) < len)
				i++;
			if (little[i] == '\0')
				return ((char *)(unsigned long)&big[p]);
		}
		p++;
	}
	return (NULL);
}
