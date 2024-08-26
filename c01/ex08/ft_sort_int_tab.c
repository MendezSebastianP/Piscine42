/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:10:05 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/25 12:09:14 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 0;
	b = 0;
	while (b != 1)
	{
		b = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				a = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = a;
				b = 0;
			}
			i++;
		}
		i = 0;
	}
}
/* ok
int	main(void)
{
	int	tab[8];
	int	size;
	int	i;

	i = 0;
	size = 7;
	tab[0] = 34;
	tab[1] = 3;
	tab[2] = 2;
	tab[3] = 5;
	tab[4] = 2;
	tab[5] = 8;
	tab[6] = 4;
	ft_sort_int_tab(tab, size);
	printf("Reversed array: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
*/
