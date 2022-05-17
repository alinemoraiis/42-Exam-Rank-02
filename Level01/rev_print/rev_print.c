/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:26:54 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/17 16:39:42 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cont;

	cont = 0;
	if (argc == 2)
	{
		while (argv[1][cont] != '\0')
			cont++;
		cont--;
		while (cont >= 0)
		{
			write (1, &argv[1][cont], 1);
			cont--;
		}
	}
	write (1, "\n", 1);
}
