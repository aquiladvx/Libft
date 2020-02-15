/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 21:17:23 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/10 13:56:34 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*ret;
	long	temp;
	int		size;

	temp = n;
	size = ft_nbrlen(temp);
	if (!(ret = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ret[size--] = '\0';
	if (temp == 0)
	{
		ret[0] = '0';
		return (ret);
	}
	if (temp < 0)
	{
		ret[0] = '-';
		temp *= -1;
	}
	while (temp > 0)
	{
		ret[size--] = 48 + (temp % 10);
		temp = temp / 10;
	}
	return (ret);
}
