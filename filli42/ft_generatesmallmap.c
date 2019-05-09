/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generatesmallmap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:17:38 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/21 14:59:53 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_getnextsq(int n, int *side)
{
	int		i;

	i = 2;
	while (1)
	{
		if (i * i >= n)
		{
			*side = i;
			return (i * i);
		}
		i++;
	}
}

static char		*ft_mapset(char *str, unsigned char c, size_t len, int *side)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (len > i + j + 2)
	{
		if (i % *side == 0 && i != 0)
		{
			str[i + j] = '\n';
			j++;
		}
		str[i + j] = c;
		i++;
	}
	str[i + j] = '\0';
	return (str);
}

char			*ft_generatesmallmap(char *map, ssize_t ret, int *side)
{
	ssize_t		size;
	int			surface;

	if (*side == 0)
	{
		size = ((ret + 1) / 21) * 4;
		surface = ft_getnextsq(size, side);
	}
	else
	{
		*side += 1;
		surface = *side * *side;
	}
	if (map)
		free(map);
	if (!(map = (char*)malloc(sizeof(char) * (surface + *side + 1))))
		return (NULL);
	return (ft_mapset(map, '.', surface + *side + 1, side));
}
