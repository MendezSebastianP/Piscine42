/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:54:28 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/29 18:17:36 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int	b;

	b = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return(1);
	return nb * ft_recursive_power(nb, power - 1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_power(9, 9));
	return (0);
}
