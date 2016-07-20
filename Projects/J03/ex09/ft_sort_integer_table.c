/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 18:38:22 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/08 15:43:21 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int *t2;
	int *init;
	int i;

	init = tab;
	if (*tab != '\0')
	{
		t2 = tab + 1;
		if (*t2 < *tab)
		{
			i = *t2;
			*t2 = *tab;
			*tab = i;
			ft_sort_integer_table(init, size);
		}
	}
}
