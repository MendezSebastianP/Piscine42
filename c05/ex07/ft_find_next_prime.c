/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:36:56 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/01 18:57:57 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (nb % i != 0 && i < nb && i < 46340)
		i++;
	if (nb != i && nb % i == 0)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/* ok
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{	
	int	a;

	a = argc;
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/
