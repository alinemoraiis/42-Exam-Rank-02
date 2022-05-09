/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:12:44 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/09 17:43:19 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_nb(int c)
{
	int	p;

	p = 0;
	if (c > 9)
		ft_print_nb(c / 10);
	p = (c % 10) + 48;
	write(1, &p, 1);
}

int	main(void)
{
	int	c;

	c = 1;
	while (c <= 100)
	{
		if (c % 3 == 0 && c % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (c % 3 == 0)
			write(1, "fizz", 4);
		else if (c % 5 == 0)
			write(1, "buzz", 5);
		else
			ft_print_nb(c);
		write(1, "\n", 1);
		c++;
	}
}
