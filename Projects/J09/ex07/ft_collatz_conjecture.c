/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 11:51:23 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/15 11:51:24 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int i;

	i = 0;
	while (base > 1)
	{
		if (base % 2 == 0)
			base /= 2;
		else
			base = 1 + 3 * base;
		i++;
	}
	return (i);
}
