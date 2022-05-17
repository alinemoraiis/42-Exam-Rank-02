/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:35:08 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/17 16:22:55 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cont;
	int	letter;

	cont = 0;
	if (argc == 2)
	{		
		while (argv[1][cont] != '\0')
		{
			letter = 1;
			if (argv[1][cont] >= 65 && argv[1][cont] <= 90)
				letter = argv[1][cont] - 64;
			if (argv[1][cont] >= 97 && argv[1][cont] <= 122)
				letter = argv[1][cont] - 96;
			while (letter > 0)
			{
				write(1, &argv[1][cont], 1);
				letter--;
			}
			cont++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
