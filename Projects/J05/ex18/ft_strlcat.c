/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 18:46:13 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 14:26:56 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
		size--;
	}
	while (*src != '\0' && size > 1)
	{
		dest[i] = *src;
		src++;
		i++;
		size--;
	}
	dest[i] = '\0';
	return (i);
}
