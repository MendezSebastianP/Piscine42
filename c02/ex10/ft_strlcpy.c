/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:34:44 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/27 17:38:34 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* ok
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src;
	char	dest[20];
	size_t	copiedlen;

	src = "Hello, world!";
	copiedlen = ft_strlcpy(dest, src, 15);
	printf("Copied string: %s\n", dest);
	printf("Expected length: %lu, Copied length: %lu\n", strlen(src), copiedlen);
	return (0);
}
*/
