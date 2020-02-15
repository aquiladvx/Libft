/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-ra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:49:39 by dlima-ra          #+#    #+#             */
/*   Updated: 2020/02/11 18:33:49 by dlima-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countrows(char const *s, char c)
{
	int	checker;
	int	count;
	int	i;

	checker = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			checker = 0;
		else if (checker == 0)
		{
			count++;
			checker = 1;
		}
		i++;
	}
	return (count);
}

static char	**writerows(const char *s, char c, char **final, int size)
{
	int	i;
	int	j;
	int	k;
	int	init;

	i = 0;
	j = 0;
	while (j < size && s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		init = i;
		while (s[i] != c && s[i])
			i++;
		final[j] = (char *)malloc(sizeof(char *) * (i - init + 1));
		if (final[j] == NULL)
			return (NULL);
		while (init < i)
			final[j][k++] = s[init++];
		final[j][k] = '\0';
		j++;
	}
	final[j] = NULL;
	return (final);
}

char		**ft_split(char const *s, char c)
{
	int		crows;
	char	**final;

	if (!s)
		return (NULL);
	crows = countrows(s, c);
	if (s == NULL)
		return (NULL);
	if (!(final = (char **)ft_calloc(sizeof(char *), (crows + 1))))
		return (NULL);
	return (writerows(s, c, final, crows));
}
