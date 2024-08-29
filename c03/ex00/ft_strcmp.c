/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:39:09 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/28 20:00:10 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	j = s1[i] - s2[i];
	return (j);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = sum(s1, s2);
	return (i);
}
/* ok
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "fdfdsfdsf";
    char str2[] = "dddd";
    int sum1;
    int sum2;

    sum1 = ft_strcmp(str, str2);
    sum2 = strcmp(str, str2);
    printf("our result: %d \n", sum1);
    printf("intended result: %d", sum2);
    return 0;
}
*/
