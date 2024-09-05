/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:22:05 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/04 15:39:21 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_match(char *base, char b);
int	error(char *base);
int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);

int	msize(int a, char *base)
{
	long int		lenb;
	long int		i;
	long int		b;

	i = 1;
	b = a;
	lenb = ft_strlen(base);
	if (a < 0)
	{
		b = -b;
		i++;
	}
	while (lenb <= b)
	{
		b = b / lenb;
		i++;
	}
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base, char *final)
{
	long int		size;
	long int		k;
	long int		nb;

	size = 0;
	while (base[size] != '\0')
		size++;
	if (size < 2 || error(base) == 1)
		return (NULL);
	k = msize(nbr, base) - 1;
	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		final[0] = '-';
	}
	while (k > 0 && nb >= size)
	{
		final[k] = base[nb % size];
		nb = nb / size;
		k--;
	}
	final[k] = base[nb];
	return (final);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int		a;
	long int		len_to;
	char			*numb;

	a = ft_atoi_base(nbr, base_from);
	len_to = msize(a, base_to);
	numb = malloc(len_to * sizeof(char) + 2);
	numb[len_to] = '\0';
	numb = ft_putnbr_base(a, base_to, numb);
	return (numb);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%s", ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
*/
