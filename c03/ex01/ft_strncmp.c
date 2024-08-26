/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:39:09 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/26 14:37:18 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	sum(char *s1, int n)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while(s1[i] != '\0' && n != i)
	{
		sum += s1[i];
		i++;
	}
	return (sum);
}

int	ft_strncmp(char *s1, char *s2,unsigned int n)
{
	int	i;
	int	j;
	int	t1;

	i = sum(s1, n);
	j = sum(s2, n);
	t1 = i-j;
	return(t1);
}

int main() {
    char str[] = "bbasdasdasd";
    char str2[] = "ba";
    int sum1;

    sum1 = ft_strncmp(str2, str, 6);
    printf("%d", sum1);
    return 0;
}
