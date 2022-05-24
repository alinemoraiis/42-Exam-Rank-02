/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:40:29 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/24 17:11:51 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	c;
	int	op;
	int	rst;

	c = 0;
	rst = 0;
	op = 1;
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\f'
		|| str[c] == '\r' || str[c] == '\n' || str[c] == '\v')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			op = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		rst = rst * 10 + (str[c] - '0');
		c++;
	}
	return (rst * op);
}

/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_atoi("   -125"));
}*/
