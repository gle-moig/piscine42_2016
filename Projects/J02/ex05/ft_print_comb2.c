/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 14:48:49 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/07 23:30:42 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//int		ft_putchar(char c);

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{

}

int main(void)
{
	ft_print_comb2();
}
