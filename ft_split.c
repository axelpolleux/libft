/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:54:02 by apolleux          #+#    #+#             */
/*   Updated: 2025/10/25 13:02:25 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_word(char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if ((*str != c) && (x == 0))
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word;
	int		tab_i;
	int		len;

	// s = ft_strtrim(s, &c);
	word = count_word((char *)s, c);
	tab_i = 0;
	len = 0;
	res = ft_calloc(word + 1, sizeof(char *));
	if (!res)
		return (0);
	while (*s)
	{
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (s[len] == c || s[len] == '\0')
		{
			res[tab_i] = ft_substr(s, 0, len);
			tab_i++;
		}
		while(s[len] && s[len] == c)
			len++;
		s += len;
	}
	return (res);
}

// #include <stdio.h>
// int main(){
// 	char **p;
// 	int i;

// 	i = 0;
// 	p = ft_split("__Hello_World_SASA__", '_');
// 	while (p[i])
// 	{
// 		printf("%s", p[i]);
// 		i++;
// 	}
// 	return (0);
// }
