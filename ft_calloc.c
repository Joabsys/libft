/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-24 13:29:25 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-24 13:29:25 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (size != 0 && nmemb > ((size_t) -1) / size)
		return (NULL);
	total = nmemb * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total);
	return (p);
}
