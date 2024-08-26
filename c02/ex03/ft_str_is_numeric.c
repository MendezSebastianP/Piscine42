/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:01:40 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/25 15:20:19 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (a == 1 && str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			a = 0;
		}
		i++;
	}
	return (a);
}

int	main(void)
{
	int		output;
	char	*hi1;

	HI1 = "12331231";
	output = ft_str_is_numeric(hi1);
	output = output + '0';
	write(1, &output, 1);
	return (0);
}
