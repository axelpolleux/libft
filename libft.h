/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:23:24 by apolleux          #+#    #+#             */
/*   Updated: 2025/10/14 11:23:26 by apolleux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

// int atoi(const char *nptr);
// void bzero(void *s, size_t n);

int isalnum(int c);
int isalpha(int c);
int isascii(int c);
int isdigit(int c);
int isprint(int c);

// void *memchr(const void *s, int c, size_t n);
// int memcmp(const void *s1, const void *s2, size_t n);
// void *memcpy(void *dest, const void *src, size_t n);
// void *memmove(void *dest, const void *src, size_t n);
// void *memset(void *s, int c, size_t n);

char *strchr(const char *s, int c);
char *strlcat(char *dst, const char *src, size_t size)

#endif