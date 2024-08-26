/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:17:27 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/22 13:47:04 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_char(number_a, number_b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = 48 + (number_a / 10);
	a2 = 48 + (number_a % 10);
	b1 = 48 + (number_b / 10);
	b2 = 48 + (number_b % 10);
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (number_a != 98)
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = 0;
		while (b <= 99)
		{
			if (b > a)
			{
				int_to_char(a, b);
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
