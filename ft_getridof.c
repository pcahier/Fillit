/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getridof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 15:06:28 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/20 20:42:19 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_getridof(char *str, int c, ssize_t size)
{
	int		i;
	int		j;
	char	*epur;

	i = 0;
	j = 0;
	if (!(epur = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			epur[j] = str[i];
			i++;
			j++;
		}
	}
	epur[j] = '\0';
	return (epur);
}
