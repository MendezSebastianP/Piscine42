/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:11:22 by smendez-          #+#    #+#             */
/*   Updated: 2024/09/03 16:48:46 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lensep(char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (strs[i])
		i++;
	while (sep[j])
		j++;
	return (i * j);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	char	*sepstr;

	if (size < 1 || strs == NULL)
	{
		sepstr = malloc((1));
		return (sepstr);
	}
	j = 0;
	sepstr = malloc((size + lensep(strs, sep)) * sizeof(char) + 1);
	if (!sepstr)
		return (NULL);
	while (strs[j])
	{
		ft_strcat(sepstr, strs[j]);
		if (strs[j + 1])
			ft_strcat(sepstr, sep);
		j++;
	}
	return (sepstr);
}
/* ok
#include <stdio.h>

int	lent(char **strs)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (strs[j])
	{
		while (strs[j][i])
		{
			i++;
			n++;
		}
		j++;
		i = 0;
	}
	return (n);
}
int	main(int argc, char *argv[])
{
	char	**s = argv + 2;

	(void)argc;
	printf("%s\n", ft_strjoin(lent(s), s, argv[1]));
	printf("Longueur size : %d\n", lent(s));
	return (0);
}
*/
