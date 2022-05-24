/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:44:27 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/24 18:00:04 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while (*s1)
	{
		c = 0;
		while (s2[c] != '\0')
		{
			if (*s1 == s2[c])
				return ((char *)s1);
			c++;
		}
		s1++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s\n", ft_strpbrk("This is a string to search in", "qxd"));
	printf("%s\n", strpbrk("This is a string to search in", "qxd"));
}*/
