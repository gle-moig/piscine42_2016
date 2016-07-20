/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 19:07:57 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 15:00:01 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		power(int nb, int pow)
{
	if (pow > 1)
		nb *= power(nb, pow - 1);
	if (pow == 0)
		return (1);
	return (nb);
}

int		base_is_ok(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	else
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int num_base;
	int pow;

	num_base = 0;
	while (*base != '\0')
	{
		num_base++;
		base++;
	}
	base -= num_base;
	pow = 0;
	if (nbr < 0)
		ft_putchar('-');
	if (base_is_ok(base))
	{
		while (nbr >= power(num_base, pow + 1))
			pow++;
		while (pow >= 0)
		{
			ft_putchar(base[nbr / power(num_base, pow)]);
			nbr %= power(num_base, pow);
			pow--;
		}
	}
}
