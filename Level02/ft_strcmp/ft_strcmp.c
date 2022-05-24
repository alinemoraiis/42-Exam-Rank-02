/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:13:50 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/24 17:21:20 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] != '\0' && s2[c] != '\0') && (s1[c] == s2[c]))
		c++;
	return (s1[c] - s2[c]);
}

/*#include <stdio.h>
#include <string.h>
int main ()
{
	char a1[] = {"Teste"};
	char a2[] = {"Teste1"};
	printf("%d\n", ft_strcmp(a1, a2));
	printf("%d\n", strcmp(a1, a2));
}*/
