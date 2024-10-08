/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:54:28 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/01 18:41:28 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	b;

	i = 1;
	b = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (i < power)
	{
		b = b * nb;
		i++;
	}
	return (b);
}
/* ok
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(8, 5));
	return (0);
}
*/
