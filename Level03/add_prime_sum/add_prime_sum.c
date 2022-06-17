/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:33:16 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/17 17:50:57 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	str_to_int(char *str)
{
	int	number;

	number = 0;
	while (*str)
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (number);
}

int	is_prime(int number)
{
	int	c;

	c = 2;
	while (c < number)
	{
		if (number % c == 0)
			return (0);
		c++;
	}
	return (1);
}

void	ft_putnbr(int number)
{
	int	nb;

	if (number > 9)
		ft_putnbr(number / 10);
	nb = (number % 10) + 48;
	write(1, &nb, 1);
}

int	main(int argc, char **argv)
{
	int	number;
	int	sum;

	sum = 0;
	if (argc == 2 && str_to_int(argv[1]) > 0)
	{	
		number = str_to_int(argv[1]);
		while (number >= 2)
		{
			if (is_prime(number) == 1)
				sum += number;
			number--;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
