/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:19:41 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/29 19:09:51 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}
