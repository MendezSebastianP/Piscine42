/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:30:28 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/29 17:43:30 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb - 1;
	if (nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return(0);
	while(i > 1)
	{
		nb  = nb * i;
		i--;
	}
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
