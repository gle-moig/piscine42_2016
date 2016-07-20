/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 16:36:06 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/15 16:36:07 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	char	*tab2[length];

	i = 0;
	j = 0;
	while (j < length)
	{
		if (*tab[j])
			tab2[i] = tab[j];
			i++;
		j++;
	}
	tab = tab2;
	return (length - i);
}