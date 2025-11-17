/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:45:48 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/16 11:08:07 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (new_list);
	new_list->content = content;
	new_list->next = 0;
	return (new_list);
}
/*
int	main(void)
{
	t_list	*list;

	list = ft_lstnew("test");
	printf("%s", (char *)list->content);
}
*/