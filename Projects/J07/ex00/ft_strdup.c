/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 12:16:25 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/13 13:06:59 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dup = (char*)malloc(len);
	len = 0;
	while (*src != '\0')
	{
		dup[len] = *src;
		src++;
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
