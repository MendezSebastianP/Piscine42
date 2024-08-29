/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:10:26 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/29 19:50:45 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int 	i;
	int	n;

	i = 1;
	n = 1;
	if (nb < 4 || nb > 2147395600)
		return(0);
	while (n != nb && n < nb)
	{
		i++;
		n = i * i;
	}
	printf("i = %d \n",i);
	printf("n = %d \n",n);
	if (n != nb)
		return (0);
	return (i);
}

int	main(void)
{
	printf("sqrt = %d", ft_sqrt(2147395600));
	return (0);
}
