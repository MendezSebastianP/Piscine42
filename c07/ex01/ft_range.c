/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:37:51 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/03 10:10:13 by smendez-         ###   ########.fr       */
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

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;
	int	b;

	b = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	a = malloc(b * sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
/* ok
#include <stdio.h>
int	main(int argc, char *argv[])
{

	int	max = atoi(argv[2]);
	int	min = atoi(argv[1]);
	int	*p = ft_range(min, max);
	int	b = max - min;
	int	i = 0;
	(void)argc;

	while (i < b)
	{
		printf("%d\n", p[i]);
		i++;
	}
	free(p);
	return (0);
}
*/
