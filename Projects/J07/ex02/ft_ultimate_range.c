/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 12:38:55 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/14 20:23:00 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	len = max - min + 1;
	if (min >= max)
	{
		*range = (int*)malloc(0);
		len = 0;
	}
	else
		*range = (int*)malloc(4 * len);
	while (min < max)
	{
		*range[max - min - 1] = max - 1;
		max--;
	}
	return (len);
}
