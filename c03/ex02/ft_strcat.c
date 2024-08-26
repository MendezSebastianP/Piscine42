/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:22:45 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/20 19:29:41 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcat(char *dest, const char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	i = 0;

	while(src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return dest;
}

