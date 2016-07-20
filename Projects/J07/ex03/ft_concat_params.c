/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 14:32:12 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/13 15:17:18 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(int argc, char **argv)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			k++;
			j++;
		}
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	j = 0;
	str = (char*)malloc(len(argc, argv) + argc - 2);
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			str[j] = *argv[i];
			argv[i]++;
			j++;
		}
		if (i + 1 < argc)
		{
			str[j] = '\n';
			j++;
		}
		i++;
	}
	return (str);
}
