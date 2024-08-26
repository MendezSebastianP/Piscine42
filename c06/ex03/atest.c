/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:44:42 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/22 11:00:22 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    char t;
    char *c;
    int i, j;
    int bomb, q;

    i = 0;
    j = 1; 
    q = 1;
    while (q != 0) {
        q = 0;
        j = 1; 
        while (j < argc - 1) { 
            i = 0;
            bomb = 0;
            while (argv[j][i] != '\0' && argv[j+1][i] != '\0' && bomb == 0) {
                if (argv[j][i] > argv[j+1][i]) {
                    c = argv[j];
                    argv[j] = argv[j+1];
                    argv[j+1] = c;
                    bomb = 1;
                    q = 1;
                }
                i++;
            }
            j++;
        }
    }
	j = 1;
    while (argv[j][0] != '\0')
        {
		i = 0;
                while (argv[j][i] != '\0')
                {
                        t = argv[j][i];
                        write(1, &t, 1 );
                        i++;
                }
                write(1, "\n", 1);
                j++;
        }
        return (0);
}

