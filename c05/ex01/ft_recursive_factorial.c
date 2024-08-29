/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:30:28 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/29 17:52:40 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	i = nb - 1;
	if (nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return(0);
	return nb * ft_recursive_factorial(nb - 1);

}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(4));
	return (0);
}
