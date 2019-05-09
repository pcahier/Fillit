/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:22:12 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/20 18:28:52 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(int i)
{
	if (i == 1)
		write(1, "usage : fillit source_file\n", 27);
	if (i > 1)
		write(1, "error\n", 6);
	exit(1);
}