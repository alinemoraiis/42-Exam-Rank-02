/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:27:52 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/24 17:33:58 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	c;
	int	c2;

	c = 0;
	while (s[c] != '\0')
	{
		c2 = 0;
		while (reject[c2] != '\0')
		{
			if (s[c] == reject[c2])
				return (c);
			c2++;
		}
		c++;
	}
	return (c);
}

/*#include <string.h>
int main ()
{
	printf("%lu\n", ft_strcspn("teste", "a"));
	printf("%lu\n", strcspn("teste", "a"));
}*/
