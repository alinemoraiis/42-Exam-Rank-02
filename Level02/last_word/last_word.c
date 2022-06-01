/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:50:06 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/01 18:33:36 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	check_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c] != '\0')
			c++;
		c--;
		while (check_blank(argv[1][c]) == 1)
			c--;
		while (check_blank(argv[1][c]) == 0 && c >= 0)
			c--;
		c++;
		while (argv[1][c] != '\0' && check_blank(argv[1][c]) == 0)
		{
			write(1, &argv[1][c], 1);
			c++;
		}
	}
	write (1, "\n", 1);
}
