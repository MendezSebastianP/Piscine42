/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 19:37:51 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/03 12:09:33 by smendez-         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	b;
	int	*dest;

	b = max - min;
	i = 0;
	dest = malloc(b * sizeof(int));
	if (dest == NULL)
	{
		range = NULL;
		return (0);
	}
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	*range = dest;
	return (i);
}
/* ok
#include <stdio.h>
int	main(int argc, char *argv[])
{

	int	max = atoi(argv[2]);
	int	min = atoi(argv[1]);
	int	*range;
	int	p = ft_ultimate_range(&range, min, max);
	int	b = max - min;
	int	i = 0;
	(void)argc;

	p = 1;
	while (i < b)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
