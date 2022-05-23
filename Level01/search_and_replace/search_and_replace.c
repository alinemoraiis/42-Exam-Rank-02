/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:32:46 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/23 16:43:15 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	l;
	int	z;

	c = 0;
	l = 0;
	z = 0;
	while (argv[2][l] != '\0')
		l++;
	while (argv[3][z] != '\0')
		z++;
	if (argc == 4 && l == 1 & z == 1)
	{
		while (argv[1][c] != '\0')
		{
			if (argv[1][c] == argv[2][0])
				argv[1][c] = argv[3][0];
			write(1, &argv[1][c], 1);
			c++;
		}
	}
	write(1, "\n", 1);
}
