/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:39:13 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/22 10:00:35 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_sort_int_tab(char *tab, int size)
{
        int i = 0;
	int j = 1;
        char *a;
        int bomb1;


        while(bomb1 != 1)
        {
                bomb1 = 1;
                while(j < size - 1)
                {
                        if(arg[j][i] > arg[j+1][i])
                        {
				a = arg[j];
				arg[j] = arg[j+1];
				arg[j+1] = a;
				bomb1=0;
                        }
                        i++;
                }
                i = 0;
        }
}

int	main(int argc,char *argv[])
{
	char	**str;
	int	i;
	int	j;

	str = ft_sort_int_tab(argv);
	j = 1;
	i = 0;
	while(j < argc)
	{
		while(argv[j][i] != '\0')
		{
			write(1,&argv[j][i],1);
			i++;
		}
		write(1,"\n",1);
		j++;
		i = 0;
	}
}
