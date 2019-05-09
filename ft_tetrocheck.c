/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrocheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:19:06 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/20 12:03:10 by hpapier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_tetropoint(char *str)
{
	int		ind;
	int		count;

	ind = 0;
	count = 0;
	while (ind < 20)
	{
		if (str[ind] == '.')
			count++;
		ind++;
	}
	if (count == 12)
		return (1);
	return (0);
}

int			ft_tetrocheck(char *str, ssize_t len)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (i < 21)
	{
		if (str[i] == '#')
			count++;
		if ((i + 1) % 5 == 0 || (i == 20 && len != 21))
		{
			if (str[i] != '\n')
				return (0);
		}
		else
		{
			if (str[i] == '\n')
				return (0);
		}
		i++;
	}
	if (count != 4)
		return (0);
	return (ft_tetropoint(str));
}
