/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:54:08 by apolleux          #+#    #+#             */
/*   Updated: 2025/10/24 15:44:48 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	calc_len(long n)
{
	int	tlen;

	tlen = 0;
	if (n < 0)
	{
		tlen++;
		n *= (-1);
	}
	if (n == 0)
		tlen++;
	while (n)
	{
		n /= 10;
		tlen++;
	}
	return (tlen);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	len;
	long			nbr;

	len = calc_len(n);
	nbr = (long int)n;
	len = calc_len(nbr);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	res[len--] = '\0';
	if (nbr == 0)
		res[len] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= (-1);
	}
	while (nbr)
	{
		res[len--] = ((nbr % 10) + 48);
		nbr /= 10;
	}
	return (res);
}
