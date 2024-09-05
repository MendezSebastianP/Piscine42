/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:33:14 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/02 19:46:20 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	a = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

/* ok
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*a;

	a = "Hello man";
	char *b = ft_strdup(a);
	char *c = strdup(a);
	printf("Result  : %s\n", b);
	printf("Intended: %s", c);
	return (0);
}*/
