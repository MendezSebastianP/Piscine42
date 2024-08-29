/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:22:45 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 17:34:52 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/* ok
#include <string.h>
#include <stdio.h>

int main() {
    char str[50] = "afjndjf";
    char str2[] = "dsjnf";
    char *cat1;
    char *cat2;

    cat1 = ft_strncat(str, str2, 20);
    cat2 = strncat(str, str2, 20);
    printf("our result     : %s \n", cat1);
    printf("intended result: %s", cat2);
    return 0;
}
*/
