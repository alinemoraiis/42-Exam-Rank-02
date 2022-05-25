/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:26:11 by ados-rei          #+#    #+#             */
/*   Updated: 2022/05/25 14:45:14 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		c;
	char	temp;

	len = 0;
	c = 0;
	temp = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (len > c)
	{
		temp = str[c];
		str[c] = str[len];
		str[len] = temp;
		len--;
		c++;
	}
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char a[50] = "aline";
	printf("%s\n", ft_strrev(a));
}*/
