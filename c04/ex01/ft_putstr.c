/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:31:24 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 18:02:48 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	a1;

	i = 0;
	while (str[i] != '\0')
	{
		a1 = str[i];
		write(1, &a1, 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*b1;

	b1 = "sfdsfsdf";
	ft_putstr(b1);
	return (0);
}
*/
