/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:18:18 by apolleux          #+#    #+#             */
/*   Updated: 2025/10/15 08:37:23 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*str1;
	unsigned char		*str2;
	int	i;

	str1 = src;
	str2 = dest;
    i = 0;

	while(i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return(dest);
}
