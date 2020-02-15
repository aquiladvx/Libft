/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 23:22:10 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/12 16:31:51 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char		*destiny;
	size_t		size;
	int			i;

	size = ft_strlen((char *)s1);
	destiny = (char *)malloc(size + 1 * sizeof(*destiny));
	if (destiny == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		destiny[i] = s1[i];
		i++;
	}
	destiny[i] = '\0';
	return (destiny);
}
