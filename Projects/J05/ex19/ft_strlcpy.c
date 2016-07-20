/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 19:01:47 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 14:28:24 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0' && size > 1)
	{
		dest[i] = *src;
		src++;
		i++;
		size--;
	}
	dest[i] = '\0';
	return (i);
}
