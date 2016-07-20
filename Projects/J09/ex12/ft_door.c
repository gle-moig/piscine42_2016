/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:04:13 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/15 16:04:15 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		open_door(int *door)
{
	ft_putstr("Door openning...");
	door.state = OPEN;
	return (0);
}

int		close_door(int *door)
{
	ft_putstr("Door closing...");
	door.state = CLOSE;
	return (1);
}

int		is_door_open(int *door)
{
	ft_putstr("Door is open ?");
	return (door.state == OPEN);
}

int		is_door_close(int *door)
{
	ft_putstr("Door is close ?");
	return (door.state == CLOSE);
}
