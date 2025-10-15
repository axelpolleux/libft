/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:42:13 by apolleux          #+#    #+#             */
/*   Updated: 2025/10/14 18:02:27 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *s, size_t n)
{
	unsigned int long	size_t;
	unsigned char		*str;
	size_t				i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
