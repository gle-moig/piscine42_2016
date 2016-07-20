/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 09:45:35 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/08 10:37:33 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int ret;

	if (nb > 0)
	{
		ret = nb;
	}
	else
	{
		if (nb == 0)
		{
			ret = 1;
		}
		else
		{
			ret = 0;
		}
	}
	if (nb > 1)
	{
		ret *= ft_recursive_factorial(nb - 1);
	}
	return (ret);
}
