/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkforsmall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 21:09:09 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/21 14:32:54 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_checkforsmall(char *str, int *tab, int mapsid)
{
	char	*f;

	if (mapsid == 2)
	{
		f = ft_strchr(str, 35);
		tab[0] = ft_strchr((f + 1), 35) - f;
		tab[1] = ft_strchr((f + tab[0] + 1), 35) - f;
		tab[2] = ft_strchr((f + tab[1] + 1), 35) - f;
		if (tab[0] == 1 && tab[1] == 4 && tab[2] == 5)
		{
			write(1, "AA\nAA\n", 6);
			exit(1);
		}
	}
}
