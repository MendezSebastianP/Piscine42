/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:31:24 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/21 09:39:32 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	char	a1;

	while(str[i] != '\0')
	{
		a1 = str[i];
		write(1, &a1,1);
		i++;
	}
}

int	main(void)
{
	char	*b1;

	b1 = "Vamos a print esta monda";
	ft_putstr(b1);
	return (0);
}
