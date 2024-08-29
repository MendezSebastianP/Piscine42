/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:39:09 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 17:32:40 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(char *s1, char *s2, unsigned int n)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	j = s1[i] - s2[i];
	return (j);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	if (n == 0)
		return (0);
	i = sum(s1, s2, n);
	return (i);
}
/* ok
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "dddddddd";
    char str2[] = "d7ddd";
    int sum1;
    int sum2;

    sum1 = ft_strncmp(str, str2, 20);
    sum2 = strncmp(str, str2, 20);
    printf("our result: %d \n", sum1);
    printf("intended result: %d", sum2);
    return 0;
}
*/
