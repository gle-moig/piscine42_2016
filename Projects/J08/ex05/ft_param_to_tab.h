/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:52:31 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/16 23:05:10 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARAM_TO_TAB_H
# define FT_PARAM_TO_TAB_H
# include <stdlib.h>

char			**ft_split_whitespaces(char *str);
void			ft_show_tab(struct s_stock_par *par);

typedef struct	s_stock_par
{
	int		size_params;
	char	*str;
	char	**copy;
	char	**tab;
}				t_stock_par;

#endif
