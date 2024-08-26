/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:01:40 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/25 17:33:33 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		while ((str[i] > 96 && str[i] <= 122) || (str[i] > 64 && str[i] <= 90))
			i++;
		while (str[i] > 47 && str[i] <= 58)
			i++;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	output;
	char	*hi1;

	hi1 = "salut First test42ca+lair+de;bien si And Zasd test";
	output = *ft_strupcase(hi1);
	printf("Upper: %s", hi1);
	return (0);
}
