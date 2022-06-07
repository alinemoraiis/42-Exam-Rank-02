/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:35:38 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/07 17:36:07 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	out;

	out = 0;
	out = out | ((octet & 128) >> 7);
	out = out | ((octet & 64) >> 5);
	out = out | ((octet & 32) >> 3);
	out = out | ((octet & 16) >> 1);
	out = out | ((octet & 8) << 1);
	out = out | ((octet & 4) << 3);
	out = out | ((octet & 2) << 5);
	out = out | ((octet & 1) << 7);
	return (out);
}

/*#include <stdio.h>
int main ()
{
	printf("%c\n", reverse_bits('&'));
}*/
