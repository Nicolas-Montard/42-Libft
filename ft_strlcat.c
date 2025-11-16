/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 08:51:13 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/13 15:26:55 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	dest_len_size;

	i = 0;
	dest_len = 0;
	dest_len_size = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (dest[dest_len_size] != '\0' && dest_len_size < size)
		dest_len_size++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size < 1)
		return (dest_len_size + src_len);
	while ((i + dest_len + 1) < size && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len_size + src_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	char str1[20] = "test";
	char str2[] = "ajout";
	char str1b[20] = "test";
	char str2b[] = "ajout";
	printf("%s\n%zu\n", str1, ft_strlcat(str1, str2, 2));
}*/
