/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:51:59 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/16 22:57:24 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_param_to_tab.h"

struct s_stock_par	*ft_params_to_tab(int ac, char **av)
{
	t_stock_par	*stock_par;
	int			i;
	int			j;

	i = 0;
	j = 0;
	stock_par = (t_stock_par*)malloc(ac);
	while (i < ac)
	{
		stock_par[i].size_param = strlen(av[i]);
		stock_par[i].str = av[i];
		while (av[i][j])
		{
			stock_par[i].copy[j] = av[i][j];
			j++;
		}
		stock_par[i].tab = ft_split_whitespaces(av[i]);
		i++;
		j = 0;
	}
	stock_par.tab[i][0] = 0;
	return (stock_par);
}
