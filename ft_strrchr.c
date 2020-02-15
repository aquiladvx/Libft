/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:01:24 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/12 18:06:59 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char		*f;

	f = (0);
	while (*str)
	{
		if (*str == c)
			f = ((char *)str);
		str++;
	}
	if (f)
		return (f);
	if (c == '\0')
		return ((char *)str);
	return (0);
}
