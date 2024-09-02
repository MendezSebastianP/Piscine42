/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:11:53 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/02 14:49:00 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f1(char a)
{
	write(1, &a, 1);
}

int	error(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j + 1])
				return (1);
			j++;
		}
		if (base [i] == 32 || base [i] == 43 || base [i] == 45)
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			size;
	long int	nb;

	nb = nbr;
	size = 0;
	while (base[size] != '\0')
		size++;
	if (size < 2 || error(base) == 1)
		return ;
	if (nbr < 0)
	{
		f1('-');
		nb = -nb;
	}
	if (nb < size)
		f1(base[nb]);
	else
	{
		ft_putnbr_base(nb / size, base);
		ft_putnbr_base(nb % size, base);
	}
}
/*
int	main(void)
{
	int	t1;
	char	*t2;

	t1 = 2342346;
	t2 = "0123456789ABCDEF";
	ft_putnbr_base(t1, t2);
}
*/
