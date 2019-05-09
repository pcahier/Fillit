/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gentab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 14:51:23 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/21 15:01:11 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		swi(int ind, char *first, char *str)
{
	int div;

	div = (((first + ind) - str) / 4) - ((first - str) / 4);
	return (div);
}

int				*ft_gentab(char *str, int count, int mapsid)
{
	int				*tab;
	int				let;
	unsigned int	i;
	char			*f;

	let = 0;
	i = 0;
	if (!(tab = (int *)malloc(sizeof(int) * count * 5)))
		return (NULL);
	ft_checkforsmall(str, tab, mapsid);
	while (count > let)
	{
		f = ft_strchr(&str[let * 16], 35);
		tab[i] = ft_strchr((f + 1), 35) - f;
		tab[i + 1] = ft_strchr((f + 1 + tab[i]), 35) - f;
		tab[i + 2] = ft_strchr((f + 1 + tab[i + 1]), 35) - f;
		tab[i] = tab[i] + (tab[i] > 1 ? 1 : 0) * (1 + mapsid - 4);
		tab[i + 1] = tab[i + 1] + (swi(tab[i + 1], f, str) * (1 + mapsid - 4));
		tab[i + 2] = tab[i + 2] + (swi(tab[i + 2], f, str) * (1 + mapsid - 4));
		tab[i + 3] = 65 + let;
		tab[i + 4] = count;
		i += 5;
		let++;
	}
	return (tab);
}
