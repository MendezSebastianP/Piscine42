/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:22:05 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/04 15:39:21 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_match(char *base, char b)
{
	int	i;

	i = 0;
	while (base[i] != b)
	{
		if (base[i] == '\0')
			return (-1);
		i++;
	}
	return (i);
}

int	error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j + 1])
				return (1);
			j++;
		}
		if (base[i] == 32 || base[i] == 43 || base[i] == 45
			|| (base[i] > 8 && base[i] < 14))
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while ((ft_match(base, str[i]) < 0 && str[i] != '\0') || error(base) == 1)
	{
		if (str[i] == 45)
			j++;
		if ((str[i] != 43 && str[i] != 45) || error(base) == 1)
			return (0);
		i++;
	}
	while (ft_match(base, str[i]) >= 0 && str[i] != '\0')
	{
		k = k * ft_strlen(base) + ft_match(base, str[i]);
		i++;
	}
	if (j % 2 == 1)
		return (k * -1);
	return (k);
}
