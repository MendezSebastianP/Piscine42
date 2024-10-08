/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:34:44 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/27 11:00:55 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* ok
#include <stdio.h>
int	main(void)
{
	char	*src;
	char	dest[5];

	src = "Hello, world!";
	ft_strcpy(dest, src);
	printf("Copied string: %s\n", dest);
	return (0);
}
*/
