/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 23:37:37 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/10 18:09:01 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizez;
	size_t	dst_size;
	char	*dstc;
	char	*srcc;

	if (!(dstc = (char *)ft_memchr(dst, '\0', size)))
		return (size + ft_strlen(src));
	srcc = (char *)src;
	dstc = (char *)dst;
	dst_size = ft_strlen(dst);
	sizez = dst_size + ft_strlen(srcc);
	dstc += dst_size;
	while (dst_size++ < size - 1 && *srcc)
		*dstc++ = *srcc++;
	*dstc = '\0';
	return (sizez);
}
