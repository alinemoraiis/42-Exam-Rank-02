/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:35:51 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/24 17:42:14 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*copy;

	c = 0;
	while (src[c] != '\0')
		c++;
	copy = (char *)malloc(sizeof(char) * c + 1);
	if (copy == NULL)
		return (copy);
	c = 0;
	while (src[c] != '\0')
	{
		copy[c] = src[c];
		c++;
	}
	copy[c] = '\0';
	return (copy);
}

/*#include <stdio.h>
#include <string.h>
int main ()
{
	printf("%s\n", ft_strdup("teste"));
	printf("%s\n", strdup("teste"));
}*/
