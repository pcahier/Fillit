/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharcomp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:53:09 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/21 14:45:45 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcharcomp(char *s, char *charset)
{
	unsigned int	check;

	check = 0;
	while (*s != '\0')
	{
		while (*charset != '\0')
		{
			if (*s == *charset)
				check = 1;
			charset++;
		}
		if (check == 0)
			return (0);
		check = 0;
		charset -= 3;
		s++;
	}
	return (1);
}
