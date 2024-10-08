/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 11:36:56 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/01 18:53:19 by smendez-         ###   ########.fr       */
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
/* ok
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(399));
	return (0);
}
*/
