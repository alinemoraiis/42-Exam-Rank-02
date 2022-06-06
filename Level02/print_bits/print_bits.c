/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:19:48 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/06 18:24:36 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	b;

	b = 128;
	while (octet >= 0 && b)
	{
		if (octet / b)
		{
			write(1, "1", 1);
			octet = octet - b;
		}
		else
			write(1, "0", 1);
		b = b / 2;
	}
}

/*void	print_bits2(unsigned char octet)
{
	int	b;

	b = 128;
	while (octet >= 0 && b)
	{
		(octet / b) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / b) ? octet = octet - b : 0;
		b = b / 2;
	}
}

int main (){
	print_bits(174);
	write(1, "\n", 1);
	print_bits2(174);
}*/
