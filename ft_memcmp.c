/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 02:43:15 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/12 16:45:16 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t			i;
	unsigned char	*pn1;
	unsigned char	*pn2;

	if (n == 0)
		return (0);
	i = 0;
	pn1 = (unsigned char *)p1;
	pn2 = (unsigned char *)p2;
	while (i < n)
	{
		if (pn1[i] != pn2[i])
			return ((int)(pn1[i] - pn2[i]));
		i++;
	}
	return (0);
}
