/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetetro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:30:50 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/21 14:13:38 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_checkplace(char *map, int *tab, int side, char *place)
{
	char	let;

	let = tab[3];
	if (!((place + tab[2] - map) <= ((side * (side + 1)))))
		return (0);
	if (!(*(place + tab[0]) == '.' && *(place + tab[1]) == '.' &&
				*(place + tab[2]) == '.'))
		return (0);
	*place = let;
	*(place + tab[0]) = let;
	*(place + tab[1]) = let;
	*(place + tab[2]) = let;
	return (1);
}

int			ft_placetetro(char *map, int *tab, int side, int ind)
{
	char	*place;

	place = ft_strchr(map, '.');
	while (1)
	{
		if (ft_checkplace(map, (tab + (ind * 5)), side, place))
		{
			if (ind < (tab[4] - 1))
			{
				if (!(ft_placetetro(map, tab, side, (ind + 1))))
				{
					*place = '.';
					*(place + tab[(ind * 5)]) = '.';
					*(place + tab[(ind * 5) + 1]) = '.';
					*(place + tab[(ind * 5) + 2]) = '.';
				}
				else
					return (1);
			}
			else
				return (1);
		}
		if (!(place = ft_strchr(place + 1, '.')))
			return (0);
	}
}
