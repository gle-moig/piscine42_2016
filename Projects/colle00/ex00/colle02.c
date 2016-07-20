/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:13:40 by fcaron            #+#    #+#             */
/*   Updated: 2016/07/09 11:03:43 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	affichage(int lin, int col, int x, int y)
{
	if (lin == 1 && (col == 1 || col == x))
	{
		return ('A');
	}
	else if (lin == y && (col == 1 || col == x))
	{
		return ('C');
	}
	else if (lin == 1 || lin == y || col == 1 || col == x)
	{
		return ('B');
	}
	else
	{
		return (' ');
	}
}

void	colle(int x, int y)
{
	int col;
	int lin;

	col = 1;
	lin = 1;
	while (lin <= y)
	{
		while (col <= x)
		{
			ft_putchar(affichage(lin, col, x, y));
			col++;
		}
		ft_putchar('\n');
		col = 1;
		lin++;
	}
}
