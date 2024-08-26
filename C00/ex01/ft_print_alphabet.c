/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:16:36 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/22 13:22:32 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z' )
	{
		write(1, &ch, 1);
		ch = ch + 1;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
