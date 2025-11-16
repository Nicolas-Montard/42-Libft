/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:27:07 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/14 14:07:42 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if ((char)c == '\0')
		return (&(((char *)s)[i + 1]));
	while (i != -1)
	{
		if (s[i] == (char)c)
			return (&(((char *)s)[i]));
		i--;
	}
	return (0);
}
