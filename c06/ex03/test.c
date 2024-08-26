/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smendez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:27:01 by smendez-          #+#    #+#             */
/*   Updated: 2024/08/22 10:37:00 by smendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int  argc, char* argv[])
{
        char    t;
        char    q;
        char    *c;
        int     i;
        int     j;
        int bomb;

        c = 0;
        i = 0;
        j = q = 1;
        while (q != 0)
        {
                q = 0;
                while (argv[j][i] != '\0')
                {
                        i = 0;
                        bomb = 0;
                        while (argv[j][i] != '\0' && bomb == 0)
                        {
                                if (argv[j][i] > argv[j+1][i] || argv[j+1][i] == '\0')
                                {
                                        c = &argv[j][i];
                                        argv[j][i] = argv[j+1][i];
                                        argv[j+1][i] = *c;
                                        bomb = 1;
                                }
                                i++;
                        }

                        j++;
                        q = 1;
                }
        }
        i = 0;
        j = 0;
        while (argv[j][0] != '\0')
        {
                while (argv[j][i] != '\0')
                {
                        t = argv[j][i];
                        write(1, &t, 1 );
                        i++;
                }
                write(1, "\n", 2);
                j++;
        }
        return (0);
}
