/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:11:53 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/29 15:21:44 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    hexachr(int nbr, char *base )
{
	int	size;

	size = 0;
	while(base[size] != '\0')
		size++;
        write(1, &base[nbr / size], 1);
        write(1, &base[nbr % size], 1);
	write(1, "\n", 1);
}

int	main(void)
{
	int	t1;
	char	*t2;

	t1 = 99;
	t2 = "0123456789";
	hexachr(t1, t2);
}



