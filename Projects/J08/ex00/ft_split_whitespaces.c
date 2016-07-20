/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespces.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 15:10:10 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/16 20:10:20 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_str_tab(char **tab, char *str, int ind)
{
	int j;

	j = 0;
	while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
	{
		tab[ind][j] = *str;
		j++;
		str++;
	}
	if (j != 0)
	{
		tab[ind][j] = '\0';
		ind++;
	}
	if (*str)
	{
		ft_str_tab(tab, str + 1, ind);
	}
	return (tab);
}

int		len_word(char *str, int num)
{
	int j;

	j = 0;
	while (num > 1)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || !*str)
			j = 1;
		else if (j == 1)
			num--;
		str++;
	}
	j = 0;
	while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
	{
		j++;
		str++;
	}
	return (j);
}

int		nb_words(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			j = 1;
		else if (j == 1)
		{
			i++;
			j = 0;
		}
		str++;
	}
	return (i);
}

char	**ft_split_white_space(char *str)
{
	char	**tab;
	int		ind;
	int		i;
	int		nb_w;

	i = 0;
	ind = 0;
	nb_w = nb_words(str);
	tab = (char**)malloc(sizeof(char*) * (nb_w + 1));
	while (i < nb_w + 1)
	{
		tab[i] = (char*)malloc(sizeof(char) * (len_word(str, i) + 1));
		i++;
	}
	tab = ft_str_tab(tab, str, ind);
	return (tab);
}
