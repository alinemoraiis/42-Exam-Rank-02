/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:02:51 by ados-rei          #+#    #+#             */
/*   Updated: 2022/06/14 15:07:35 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	res;
	unsigned char	left_bits;
	unsigned char	right_bits;

	left_bits = octet << 4;
	right_bits = octet >> 4;
	res = left_bits | right_bits;
	return (res);
}

/*#include <stdio.h>
int	main()
{
	unsigned char test = 192;
	printf("%d\n", swap_bits(test));
}*/
