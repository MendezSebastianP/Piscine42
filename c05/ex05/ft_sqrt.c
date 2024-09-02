/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:10:26 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/02 14:14:09 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (nb < 1 || nb > 2147395600)
		return (0);
	while (n != nb && n < nb)
	{
		i++;
		n = i * i;
	}
	if (n != nb)
		return (0);
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("sqrt = %d", ft_sqrt(6400));
	return (0);
}
*/
