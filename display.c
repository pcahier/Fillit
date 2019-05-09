/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpapier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:21:51 by hpapier           #+#    #+#             */
/*   Updated: 2017/11/21 14:09:25 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	display(char *map)
{
	int		ind;

	ind = 0;
	while (map[ind] != '\0')
	{
		ft_putchar(map[ind]);
		ind++;
	}
	ft_putchar('\n');
}
