/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:13:59 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/14 09:09:39 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*newstr;
	unsigned int	s1_len;
	unsigned int	s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!newstr)
		return (newstr);
	ft_strlcat(newstr, s1, s1_len + 1);
	ft_strlcat(newstr, s2, s1_len + s2_len + 1);
	return (newstr);
}
/*
int	main(void)
{
	printf("%s", ft_strjoin("debut,", "fin"));
	return (0);
}*/