/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:52:25 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/09 18:06:46 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s2[c] != '\0')
	{
		s1[c] = s2[c];
		c++;
	}
	s1[c] = '\0';
	return (s1);
}

/*#include <stdio.h>
int main ()
{
	char *src = "aline";
	char dest[10];

	ft_strcpy(dest, src);
	printf("%s\n", dest);
}*/
