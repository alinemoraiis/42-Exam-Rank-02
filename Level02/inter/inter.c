/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:34:13 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/31 18:05:56 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strchr(int c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check_double(int c, char *str, int position)
{
	int	i;

	i = 0;
	while (i < position)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	c;

	if (argc != 3)
		return (0);
	c = 0;
	while (argv[1][c] != '\0')
	{
		if ((ft_strchr(argv[1][c], argv[2]) == 1))
			if (check_double(argv[1][c], argv[1], c) == 0)
				write(1, &argv[1][c], 1);
		c++;
	}
	write(1, "\n", 1);
}
