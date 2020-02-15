/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:24:59 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/11 18:31:50 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*res;
	unsigned int	cmp;

	if (!s)
		return (NULL);
	cmp = ft_strlen((char *)s);
	if (start > cmp)
		return (ft_strdup(""));
	if (!(res = malloc((len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (i < len && *s)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
