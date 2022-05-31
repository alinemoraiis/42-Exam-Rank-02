/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:12:18 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/31 17:30:15 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strchr(int c, const char *accept)
{
	int	i;

	i = 0;
	while (accept[i] != '\0')
	{
		if (accept[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int	c;
	int	i;

	c = 0;
	while (s[c] != '\0')
	{
		if (ft_strchr(s[c], accept) == 0)
			break ;
		c++;
	}
	return (c);
}

/*#include <string.h>
int main ()
{
	printf("%lu\n", ft_strspn("This is a test string", "tgaThis"));
	printf("%lu\n", strspn("This is a test string", "tgaThis"));
}*/
