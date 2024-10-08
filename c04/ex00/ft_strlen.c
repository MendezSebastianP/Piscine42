/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:04:10 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 10:47:34 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>
int	main()
{
	char	*str;
	int	numb;

	str = "";
	numb = ft_strlen(str);
	printf("Result: %d",numb);
	return (0);
}
*/
