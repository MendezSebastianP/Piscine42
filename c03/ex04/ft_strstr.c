/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:27:55 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 20:01:44 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*ex1;
	char	*ex2;
	char	*s1;
	char	*s2;

	s1 = "KIKIRIKI lala";
	s2 = "RI";
	ex1 = ft_strstr(s1, s2);
	ex2 = strstr(s1, s2);
	printf("ft_strstr result: %s\n", ex1);
	printf("intended result : %s", ex2);
	return (0);
}
*/
