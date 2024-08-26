/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:39:09 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/20 18:51:01 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	sum(char	*s1)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while(s1[i] != '\0')
	{
		sum += s1[i];
		i++;
	}
	return (sum);
}

int	ft_strncmp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	t1;
	
	i = sum(s1);
	j = sum(s2);
	t1 = i-j;
	return(t1);
}

int main() {
    char str[] = "dddddddddddddddddddddddddddddddddddddddddddddd";
    char str2[] = "ddddd";
    int sum1;

    sum1 = ft_strncmp(str, str2);
    printf("%d", sum1);
    return 0;
}
