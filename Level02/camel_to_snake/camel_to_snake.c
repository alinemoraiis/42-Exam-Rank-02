/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:40:51 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/23 17:52:14 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc != 2)
		return (0);
	while (argv[1][c] != '\0')
	{
		if (argv[1][c] >= 'A' && argv[1][c] <= 'Z')
		{
			write(1, "_", 1);
			argv[1][c] = argv[1][c] + 32;
		}
		write(1, &argv[1][c], 1);
		c++;
	}	
}
