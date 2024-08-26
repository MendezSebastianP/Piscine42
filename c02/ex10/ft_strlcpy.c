/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:34:44 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/26 09:32:04 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	i;

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

int	main(void)
{
	char	*src;
	char	dest[20];
	size_t	copiedlen;

	copiedlen = ft_strlcpy(dest, src, 15);
	src = "Hello, world!";
	printf("Copied string: %s\n", dest);
	printf("Expected length: %lu, Copied length: %lu\n", strlen(src), copiedlen);
	return (0);
}
