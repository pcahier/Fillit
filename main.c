/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:08:25 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/21 15:01:08 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_mainsupp(char *buf, ssize_t ret, char *map, int fd)
{
	int			*tab;
	char		*epur;
	int			side;
	int			ret2;

	side = 0;
	ret2 = 0;
	ft_checkval(buf, ret + 1);
	epur = ft_getridof(buf, '\n', ret);
	while (ret2 != 1)
	{
		map = ft_generatesmallmap(map, ret, &side);
		tab = ft_gentab(epur, ((ret + 1) / 21), side);
		ret2 = ft_placetetro(map, tab, side, 0);
		free(tab);
	}
	display(map);
	if (close(fd) == -1)
		return (1);
	return (0);
}

int				main(int argc, char **argv)
{
	int			fd;
	ssize_t		ret;
	char		buf[BUF_SIZE + 1];
	char		*map;

	map = NULL;
	if (argc != 2)
		ft_error(1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_error(2);
	if ((ret = read(fd, buf, BUF_SIZE)) <= 0)
		ft_error(2);
	buf[ret] = '\0';
	return (ft_mainsupp(buf, ret, map, fd));
}
