/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:52:03 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/12 18:11:23 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t i;

	if (*to_find == '\0')
		return ((char *)str);
	i = ft_strlen((char *)to_find);
	while (*str && n-- >= i)
	{
		if (*str == *to_find && ft_strncmp(str, to_find, i) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
