/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 20:45:55 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/21 14:59:51 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUF_SIZE 546

void	ft_error(int i);
void	ft_checkval(char *str, ssize_t len);
int		ft_strcharcomp(char *s, char *charset);
int		ft_tetrocheck(char *str, ssize_t len);
int		*ft_gentab(char *str, int count, int mapsid);
char	*ft_generatesmallmap(char *map, ssize_t ret, int *side);
void	ft_check_str(char *str);
int		ft_validate(char *str, int index, int check);
void	ft_putchar(char c);
void	ft_putnbr(int n);
char	*ft_strchr(const char *str, int c);
char	*ft_getridof(char *str, int c, ssize_t size);
int		ft_placetetro(char *map, int *tab, int count, int ind);
void	display(char *map);
void	ft_checkforsmall(char *str, int *tab, int mapsid);

#endif
