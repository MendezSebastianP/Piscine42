/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:28:59 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/25 12:05:59 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* ok
int	main(void)
{
	char	*str;
	int		length;

	str = "Hello, world!";
	length = ft_strlen(str);
	printf("Length of '%s' is %d\n", str, length);
	return (0);
}
*/
