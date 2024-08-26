/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:04:10 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/21 09:15:00 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char	*str;
	int	numb;

	str = "123456789";
	numb = ft_strlen(str);
	printf("Result: %d",numb);
	return (0);
}
