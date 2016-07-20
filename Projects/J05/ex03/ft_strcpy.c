/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 14:26:51 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/11 15:12:03 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	dest[i] = *src;
	while (*src != '\0')
	{
		src++;
		i++;
		dest[i] = *src;
	}
	return (dest);
}
