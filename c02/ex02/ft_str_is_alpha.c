/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:01:40 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/27 11:02:04 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	while (a == 1 && str[i] != '\0')
	{
		if (str[i] < 65)
		{
			a = 0;
		}
		if (str[i] > 90 && str[i] <= 96)
		{
			a = 0;
		}
		if (str[i] > 122)
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
	int	output;
	char	hi1[] = "ZAz1agasdag";
	output = ft_str_is_alpha(hi1);
	output = output + '0';
	write(1, &output, 1);
	return (0);
}
*/
