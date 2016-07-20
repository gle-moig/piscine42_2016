/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 10:37:58 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/12 12:11:01 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	argc--;
	while (argc > 0)
	{
		while (*argv[argc] != '\0')
		{
			ft_putchar(*argv[argc]);
			argv[argc]++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
