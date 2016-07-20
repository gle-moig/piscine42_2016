/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:30:10 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 13:40:48 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		power(int nb, int pow)
{
	if (pow < 0)
		return (0);
	if (pow > 0)
		nb *= power(nb, pow - 1);
	if (pow == 0)
		return (1);
	return (nb);
}

void	ft_putnbr(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (power(10, i) < nb / 10)
	{
		i++;
	}
	while (i > 0)
	{
		ft_putchar(nb / power(10, i) + '0');
		nb %= power(10, i);
		i--;
	}
	ft_putchar(nb + '0');
}
