/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 09:13:40 by fcaron            #+#    #+#             */
/*   Updated: 2016/07/10 18:07:13 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	affichage(int lin, int col, int x, int y)
{
	if (lin == 1 && col == 1)
	{
		return ('/');
	}
	else if (lin == y && col == 1)
	{
		return ('\\');
	}
	else if (lin == 1 && col == x)
	{
		return ('\\');
	}
	else if (lin == y && col == x)
	{
		return ('/');
	}
	else if (col == 1 || col == x || lin == 1 || lin == y)
	{
		return ('*');
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
