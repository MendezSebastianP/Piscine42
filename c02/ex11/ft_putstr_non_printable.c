/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:40:36 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/27 17:49:59 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexachr(unsigned char str)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[str / 16], 1);
	write(1, &"0123456789abcdef"[str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			hexachr(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*t1 = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(t1);
}
*/
