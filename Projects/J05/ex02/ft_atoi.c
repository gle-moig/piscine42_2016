/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 13:20:27 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/11 14:34:58 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int retour;
	int signe;

	retour = 0;
	signe = 1;
	while (*str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		signe = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		retour = 10 * retour + *str - '0';
		str++;
	}
	return (retour * signe);
}
