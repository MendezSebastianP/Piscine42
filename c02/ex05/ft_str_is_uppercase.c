/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:01:40 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/27 11:04:17 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (a == 1 && str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			a = 0;
		}
		i++;
	}
	return (a);
}
/* ok

#include <unistd.h>
int	main(void)
{
	int		output;
	char	*hi1;

	hi1 = "SDFSDF";
	output = ft_str_is_uppercase(hi1);
	output = output + '0';
	write(1, &output, 1);
	return (0);
}
*/
