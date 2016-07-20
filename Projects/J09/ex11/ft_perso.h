/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 15:30:25 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/15 16:01:55 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS	"save austin Powers"

char			*strdup(const char *str);

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;

}				t_perso;

#endif
