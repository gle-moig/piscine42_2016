/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 21:23:08 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 21:23:36 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_puthex(unsigned int nb, char *hex);
{
	int i;

	i = 0;
	while (nb / 16 < power(16, i))
		i++;
	while (i > 0)
	{
		ft_putchar(hex[nb / power(16, i)]);
		nb -= nb / power(16, i);
		i--;
	}
}

void	ft_hexvalue(void *addr, unsigned int size)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (size != 0)
			ft_puthex(addr[i], "0123456789abcdef");
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
		size--;
	}
}

void	ft_chars(void *addr, unsigned int size)
{
	int i;

	i = 0;
	while (i < 16 && size > 0)
	{
		if (addr[i] < 32)
			ft_putchar('.');
		else
			ft_putchar(addr[i]);
	}
	ft_putchar('\n');
}

void	ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int begining;

	i = 0;
	begining = size % 16;
	while (size > 0)
	{
		if (size % 16 == begining)
			ft_puthex(addr, "0123456789abcdef");
		ft_hexvalue(addr, size);
		if ((size + 1) % 16 == begining)
			ft_chars(addr, size);
		size -= 16;
	}
}
