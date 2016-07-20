/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:45:16 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/15 10:51:07 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimatum.h"

void	ft_destroy(char ***factory)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (factory[y][x][0])
	{
		while (factory[y][x][0])
		{
			free(factory[y][x]);
			x++;
		}
		x = 0;
		y++;
	}
}
