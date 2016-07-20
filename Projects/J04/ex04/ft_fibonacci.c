/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 12:14:59 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/08 13:20:32 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int ret;

	if (index > 1)
	{
		ret = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (ret);
	}
	else
	{
		if (index == 1)
		{
			return (1);
		}
		if (index == 0)
		{
			return (0);
		}
		return (-1);
	}
}
