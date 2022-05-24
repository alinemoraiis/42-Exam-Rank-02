/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:28:24 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/24 10:38:46 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	number_one;
	int	number_two;
	int	result;

	if (argc != 4)
		return (0);
	number_one = atoi(argv[1]);
	number_two = atoi(argv[3]);
	if (argv[2][0] == '+')
		result = number_one + number_two;
	else if (argv[2][0] == '-')
		result = number_one - number_two;
	else if (argv[2][0] == '*')
		result = number_one * number_two;
	else if (argv[2][0] == '/')
		result = number_one / number_two;
	else if (argv[2][0] == '%')
		result = number_one % number_two;
	printf("%d", result);
	printf("\n");
}
