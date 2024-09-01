/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:36:56 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/01 15:17:36 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while(nb % i != 0 && i < nb && i < 46340)
		i++;
	printf("%d\n", i);
	if (nb != i && nb % i == 0)
		return (0);
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(23));
	return (0);
}
