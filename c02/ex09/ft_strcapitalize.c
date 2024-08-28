/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:01:40 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 10:05:45 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		while ((str[i] > 96 && str[i] <= 122) || (str[i] > 47 && str[i] < 58))
			i++;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*output;
	char	hi1[] = "*]01/#uHqfi@y-b3jh/-$:kFw1|ixoy*qKga]K/";

	output = ft_strcapitalize(hi1);
	printf("Upper: %s", hi1);
	return (0);
}
*/
