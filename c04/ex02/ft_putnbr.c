/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:58:31 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/31 15:08:37 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	powerf(int b)
{
	int	c;

	c = 1;
	while (b > 0)
	{
		c = c * 10;
		b = b - 1;
	}
	return (c);
}

int	maxn(int a1)
{
	if (a1 == -2147483648)
	{
		write(1, "-214748364", 10);
		a1 = 8;
	}
	if (a1 < 0)
	{
		write(1, "-", 1);
		a1 = a1 * -1;
	}
	return (a1);
}

void	ft_putnbr(int a1)
{
	int	b1;
	int	d1;
	int	i;

	a1 = maxn(a1);
	b1 = a1;
	i = 0;
	while (b1 >= 10)
	{
		b1 = b1 / 10;
		i = i + 1;
	}
	while (i > 0)
	{
		b1 = a1 / powerf(i);
		d1 = b1 + 48;
		write(1, &d1, 1);
		a1 = a1 % powerf(i);
		i = i - 1;
	}
	b1 = a1 + 48;
	write(1, &b1, 1);
}
/* ok
int	main(void)
{
	int	test;

	test = -234;
	ft_putnbr(-2147483648);
	return (0);
}
*/
