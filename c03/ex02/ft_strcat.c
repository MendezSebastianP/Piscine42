/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:22:45 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 17:33:46 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
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
    char str[50] = "";
    char str2[] = "dsjnf";
    char *cat1;
    char *cat2;

    cat1 = ft_strcat(str, str2);
    cat2 = strcat(str, str2);
    printf("our result: %s \n", cat1);
    printf("intended result: %s", cat2);
    return 0;
}
*/
