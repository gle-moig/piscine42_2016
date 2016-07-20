/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recusive_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 11:55:55 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/09 15:51:58 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	if (power > 0)
	{
		return (nb);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
