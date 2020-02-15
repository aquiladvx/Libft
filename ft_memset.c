/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 05:14:40 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/12 18:05:08 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int v, size_t num)
{
	unsigned char		p;
	char				*temp;

	temp = ptr;
	p = (unsigned char)v;
	while (num--)
		*(temp++) = p;
	return (ptr);
}
