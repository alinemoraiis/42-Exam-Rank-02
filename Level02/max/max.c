/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:10:48 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/02 16:16:37 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	c;
	int	ret;

	if (!len)
		return (0);
	c = 0;
	ret = 0;
	while (c <= len)
	{
		if (tab[c] > ret)
			ret = tab[c];
		c++;
	}
	return (ret);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int *tab;
	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 7;
	tab[1] = 10;
	tab[2] = 24;
	printf("%d\n", max(tab, 3));
}*/
