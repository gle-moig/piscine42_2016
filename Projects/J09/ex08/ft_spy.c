/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 12:23:09 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/15 12:23:11 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*minimize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		i++;
	}
	return (str);
}

int		ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	str = minimize(str);
	while (to_find[i] && *str)
	{
		if (*str == to_find[i] &&
			!(i == 0 && (*(str - 1) > 'a' && *(str - 1) < 'z')))
			i++;
		else
			i = 0;
		str++;
	}
	if (!i)
		return (0);
	else
		return (1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	while (argc-- > 0)
	{
		if (ft_strstr(argv[argc], "president") ||
			ft_strstr(argv[argc], "attack") || ft_strstr(argv[argc], "powers"))
		{
			ft_putstr("ALERT!!!\n");
			return (0);
		}
	}
	return (0);
}
