/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkval.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:27:34 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/20 21:06:42 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_checkval(char *str, ssize_t len)
{
	if ((len) % 21 != 0 || len > 546)
		ft_error(3);
	if (!(ft_strcharcomp(str, ".#\n")))
		ft_error(4);
	while (len != 0)
	{
		if (!(ft_tetrocheck(str, len)))
			ft_error(5);
		ft_check_str(str);
		str += 21;
		len -= 21;
	}
}
