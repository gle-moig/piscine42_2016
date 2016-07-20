/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 18:12:43 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 18:12:49 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	digit(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c && base[i] != '\0')
		i++;
	if (base[i] == '\0')
		return (0);
	else
		return (i);
}

int	power(int nb, int pow)
{
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	return (nb * power(nb, pow - 1));
}

int	ft_atoi_base(char *str, char *base)
{
	int	pow;
	int base_num;
	int nb;

	nb = 0;
	base_num = ft_strlen(base);
	pow = ft_strlen(str);
	while (*str != '\0')
	{
		pow--;
		nb += digit(*str, base) * power(base_num, pow);
		str++;
	}
	return (nb);
}
