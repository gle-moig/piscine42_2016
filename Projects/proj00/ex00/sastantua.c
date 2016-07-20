/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 13:57:38 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/10 22:37:47 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	disp_spaces(int size, int lin, int lv)
{
	int i;
	int indent;

	indent = 0;
	i = lv - 1;
	while (i <= size)
	{
		indent += 2 + (i / 2);
		i++;
	}
	i = 0;
	while (i < ((3 + size + 2) * size) / 2 - lin + indent - size - 3)
	{
		ft_putchar(' ');
		i++;
	}
}

void	disp_lin(int lin, int size, int sum, int lv)
{
	int i;

	i = 0;
	disp_spaces(size, lin, lv);
	ft_putchar('/');
	while (i <= 2 * (lin - 1) + 2 * sum)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	disp_porte(int lin, int serrure, int size, int sum)
{
	int i;

	i = 0;
	while (i <= 2 * (lin - 1) + 2 * sum)
	{
		if (i > (2 * (lin - 1) + 2 * sum - 1 - 2 * ((size - 1) / 2)) / 2
			&& i <= (2 * (lin - 1) + 2 * sum + 1 + 2 * ((size - 1) / 2)) / 2)
		{
			if (serrure &&
				i == (2 * (lin - 1) + 2 * sum + 1 + 2 *
				((size - 1) / 2)) / 2 - 1)
			{
				ft_putchar('$');
			}
			else
			{
				ft_putchar('|');
			}
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	disp_last_lv(int lin, int size, int sum, int lv)
{
	int i;
	int lin_in_lv;

	lin_in_lv = 2 + lv;
	i = 0;
	while (i <= 1 + ((size + 1) % 2))
	{
		disp_lin(lin, size, sum, lv);
		lin++;
		i++;
		lin_in_lv--;
	}
	i = 1;
	while (lin_in_lv != 0)
	{
		disp_spaces(size, lin, lv);
		ft_putchar('/');
		disp_porte(lin, (lin_in_lv == i && size >= 5), size, sum);
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
		lin++;
		lin_in_lv--;
	}
}

void	sastantua(int size)
{
	int lin;
	int lin_in_lv;
	int lv;
	int sum;

	sum = 0;
	lin = 1;
	lv = 1;
	while (lv < size)
	{
		lin_in_lv = 2 + lv;
		while (lin_in_lv != 0)
		{
			disp_lin(lin, size, sum, lv);
			lin_in_lv--;
			lin++;
		}
		lv++;
		sum += 1 + (lv / 2);
	}
	disp_last_lv(lin, size, sum, lv);
}
