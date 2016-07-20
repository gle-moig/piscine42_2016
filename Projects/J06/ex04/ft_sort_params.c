/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gle-moig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 10:37:58 by gle-moig          #+#    #+#             */
/*   Updated: 2016/07/13 11:31:06 by gle-moig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*replace;

	i = 2;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], argv[i - 1]) > 0)
		{
			replace = argv[i];
			argv[i] = argv[i - 1];
			argv[i - 1] = replace;
			i = 2;
		}
		i++;
	}
	while (argc-- > 1)
	{
		while (*argv[argc] != '\0')
		{
			ft_putchar(*argv[argc]);
			argv[argc]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
