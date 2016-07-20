/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:16:07 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/11 09:28:57 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str <= 31)
		{
			ft_putchar('\\');
			if (*str >= 16)
				ft_putchar('1');
			else
				ft_putchar('0');
			if (*str % 16 >= 10)
				ft_putchar('0' + *str % 16);
			else
				ft_putchar('a' + *str % 16 - 10);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
