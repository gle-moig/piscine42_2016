/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 18:13:21 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/08 15:46:27 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int ret;

	ret = 0;
	while (*str != '\0')
	{
		ret = ret * 10 + *str - 48;
		str++;
	}
	return (ret);
}
