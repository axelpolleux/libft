/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:54:08 by apolleux          #+#    #+#             */
/*   Updated: 2025/10/24 09:44:18 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	calc_len(int n)
{
	int	tlen;

	tlen = 0;
	if (n < 0)
		tlen++;
	while (n)
	{
		tlen++;
		n /= 10;
	}
	return (tlen);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		i;
	long	nbr;

	nbr = n;
	len = calc_len(nbr);
	res = malloc((len + 1) * (sizeof(char)));
	if (!res)
		return (NULL);
	i = len;
	res[i--] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= (-1);
	}
	while (nbr)
	{
		res[i--] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	return (res);
}

#include <stdio.h>
int main(){
	char *res = ft_itoa(-256);
	printf("%s\n", res);
	free(res);
}
