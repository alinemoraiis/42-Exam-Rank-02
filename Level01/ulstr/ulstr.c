/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:10:07 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/23 17:14:26 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c] != '\0')
		{
			if (argv[1][c] >= 'a' && argv[1][c] <= 'z')
				argv[1][c] = argv[1][c] - 32;
			else if (argv[1][c] >= 'A' && argv[1][c] <= 'Z')
				argv[1][c] = argv[1][c] + 32;
			write(1, &argv[1][c], 1);
			c++;
		}
	}
	write(1, "\n", 1);
}
