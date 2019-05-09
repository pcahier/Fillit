/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalidate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpapier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:48:40 by hpapier           #+#    #+#             */
/*   Updated: 2017/11/20 20:54:19 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_count(char *src, int index, int check)
{
	int		ct;

	ct = 1;
	if (check)
		ct += ft_validate(src, index, 0);
	return (ct);
}

int				ft_validate(char *str, int index, int check)
{
	int		ct;

	ct = 0;
	if (str[index + 1] == '#')
		ct += ft_count(str, (index + 1), check);
	if ((index + 5) < 21)
	{
		if (str[index + 5] == '#')
			ct += ft_count(str, (index + 5), check);
	}
	if (str[index - 1] == '#')
		ct += ft_count(str, (index - 1), check);
	if (index - 5 >= 0)
	{
		if (str[index - 5] == '#')
			ct += ft_count(str, (index - 5), check);
	}
	return (ct);
}

void			ft_check_str(char *str)
{
	int		ind;
	int		ct;

	ind = 0;
	ct = 0;
	while (ind < 16)
	{
		if (str[ind] == '#')
			break ;
		ind++;
	}
	if (str[ind + 1] == '#')
		ct += ft_validate(str, (ind + 1), 1);
	if (str[ind + 5] == '#')
		ct += ft_validate(str, (ind + 5), 1);
	if (str[ind + 1] == '#' && str[ind + 5] == '#')
	{
		if (ct <= 6)
			ft_error(9);
	}
	else
	{
		if (ct <= 4)
			ft_error(9);
	}
}
