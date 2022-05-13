/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:36:58 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/13 16:39:31 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		write(1, &str[cont], 1);
		cont++;
	}
}

/*int	main()
{
	ft_putstr("Aline");
}*/
