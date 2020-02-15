/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:07:14 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/12 18:01:39 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	size_t				i;
	char				*t;
	const char			*f;

	t = to;
	f = from;
	if (to > from)
	{
		i = n;
		while (i > 0)
		{
			t[i - 1] = f[i - 1];
			i--;
		}
	}
	else if (to < from)
		ft_memcpy(to, from, n);
	return (to);
}
