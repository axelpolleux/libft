/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:10:42 by apolleux          #+#    #+#             */
/*   Updated: 2025/10/25 13:58:27 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*res;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		res = malloc(0);
		if (!res)
			return (NULL);
		return (res);
	}
	if (nmemb > (size_t)-1 / size)
		return (0);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	ft_bzero(res, size * nmemb);
	return (res);
}
