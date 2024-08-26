/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:49:02 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/21 13:51:20 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while((str[i] < 48 || str[i] > 57) && str[i] != '\0')
	{
		if (str[i] == 45)
		{
			j++;
		}
		i++;
	}
	while(str[i] > 47 && str[i] < 58)
	{
		k = k + str[i]-48;
		k = k * 10;
		i++;
	}
	k = k / 10;
	if(j % 2 == 1)
	{
		return(k * -1);
	}
	return(k);

}

int	main(void)
{
	char*	str;
	int	a;
	
	str = "    ---+--+1234ab567";
	a = ft_atoi(str);
	printf("%d", a);
	return(0);
}
