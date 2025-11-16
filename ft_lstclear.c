/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:50:45 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/16 13:42:56 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actual_list;
	t_list	*following_list;

	if (!lst || !del)
		return ;
	actual_list = *lst;
	while (actual_list)
	{
		following_list = actual_list->next;
		ft_lstdelone(actual_list, del);
		actual_list = following_list;
	}
	*lst = 0;
}
/*
int	main(void)
{
	t_list *list;

	list = ft_lstnew(ft_strdup("third"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("second")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("first")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("fourth")));
	ft_lstclear(&(list->next), free);
	printf("%p\n", (list));
	printf("%p\n", (list->next));
	printf("%p\n", (list->next->next));
}*/