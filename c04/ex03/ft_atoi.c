/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:49:02 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/31 16:38:53 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while ((str[i] < 48 || str[i] > 57) && str[i] != '\0')
	{
		if (str[i] == 45)
			j++;
		if (str[i] != 43 && str[i] != 45)
			return (0);
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		k = k * 10 + str[i] - 48;
		i++;
	}
	if (j % 2 == 1)
		return (k * -1);
	return (k);
}
/* ok
#include <stdio.h>
int	main(void)
{
	int	a;
	
	a = ft_atoi(" \n \t +++-+----2147483647asd");
	printf("%d", a);
	return(0);
}
*/
