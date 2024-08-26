/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:41:30 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/25 12:07:43 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	y;
	int	a;

	j = size - 1;
	y = 0;
	while (y < size / 2)
	{
		a = tab[j];
		tab[j] = tab[y];
		tab[y] = a;
		y++;
		j--;
	}
}
/* ok
int	main(void)
{
	int	tab[8];
	int	size;
	int	i;

	i = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	tab[6] = 7;
	size = 7;
	ft_rev_int_tab(tab, size);
	printf("Reversed array: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i ++;
	}
	printf("\n");
	return (0);
}
*/
