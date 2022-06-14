/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:09:16 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/14 15:42:42 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_union(char *s1, char *s2)
{
	int	printed[128] = { 0 };
	int	nb;

	while (*s1)
	{
		nb = *s1;
		if (printed[nb] == 0)
		{
			write(1, &nb, 1);
			printed[nb] = 1;
		}
		s1++;
	}
	while (*s2)
	{
		nb = *s2;
		if (printed[nb] == 0)
		{
			write(1, &nb, 1);
			printed[nb] = 1;
		}
		s2++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
