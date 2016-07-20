/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:12:23 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/14 19:31:47 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ap(int h)
{
	h %= 24;
	if (h < 12)
		return ('A');
	else
		return ('P');
}

int		form12(int h)
{
	if (h % 12 == 0)
		return (12);
	else
		return (h % 12);
}

void	ft_takes_place(int hours)
{
	char	c;
	char	c1;
	int		h1;

	h1 = hours + 1;
	hours %= 24;
	h1 %= 24;
	c = ap(hours);
	c1 = ap(h1);
	hours = form12(hours);
	h1 = form12(h1);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
		hours, c, h1, c1);
}
