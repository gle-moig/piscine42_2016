/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 14:14:17 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/09 16:21:40 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int ret;

	ret = 1;
	i = 2;
	while (i <= nb / 2)
	{
		if (i * (nb / i) == nb)
		{
			ret = 0;
		}
		i++;
	}
	if (nb <= 1)
	{
		ret = 0;
	}
	return (ret);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
