/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 12:38:55 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/14 20:21:58 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;

	if (min >= max)
		tab = (int*)malloc(0);
	else
		tab = (int*)malloc(4 * (max - min + 1));
	while (min < max)
	{
		tab[max - min - 1] = max - 1;
		max--;
	}
	return (tab);
}
