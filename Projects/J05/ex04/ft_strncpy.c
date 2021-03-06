/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:58:11 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 14:15:08 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	dest[0] = *src;
	while (n != 0 && *src == '\0')
	{
		n--;
		i++;
		src++;
		dest[i] = *src;
	}
	while (n != 0)
	{
		n--;
		i++;
		dest[i] = '\0';
	}
	return (dest);
}
