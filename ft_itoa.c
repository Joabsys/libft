/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesequie <jesequie@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-18 12:42:58 by jesequie          #+#    #+#             */
/*   Updated: 2026-05-18 12:42:58 by jesequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(long n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	num = n;
	len = size(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
		num *= -1;
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
