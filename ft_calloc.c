/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:05:43 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/12 12:25:12 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*array;
	unsigned int	i;

	i = 0;
	array = malloc(nmemb * size);
	if (!array)
		return (array);
	while (i < nmemb * size)
	{
		((char *)array)[i] = 0;
		i++;
	}
	return (array);
}
