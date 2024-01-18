/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malo <malo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:00:48 by malo              #+#    #+#             */
/*   Updated: 2024/01/03 14:06:40 by malo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	octet = (octet * 0x0202020202ULL & 0x010884422010ULL) % 0x3ff;
	return (octet);
}

unsigned char	reverse_bits_v2(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}