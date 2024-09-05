/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:39:13 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/04 20:26:17 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sum(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	j = s1[i] - s2[i];
	return (j);
}

void	ft_sort_int_tab(char *arg[])
{
	int		i;
	int		j;
	char	*a;

	i = 0;
	j = 1;
	while (arg[j] && arg[j + 1])
	{
		if (sum(arg[j], arg[j + 1]) > 0)
		{
			a = arg[j];
			arg[j] = arg[j + 1];
			arg[j + 1] = a;
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (i < argc)
	{
		ft_sort_int_tab(argv);
		i++;
	}
	i = 0;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
		i = 0;
	}
}
