/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:59:54 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/14 17:47:08 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_wdmatch(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0')
	{
		while (*s2 != s1[c] && *s2 != '\0')
			s2++;
		if (*s2 == '\0')
			return ;
		s2++;
		c++;
	}
	write(1, s1, c);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		print_wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
}
