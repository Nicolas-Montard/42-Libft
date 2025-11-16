/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:05:22 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/16 11:29:35 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
/*
int	main(void)
{
	t_list	*list;

	list = 0;
	ft_lstadd_back(&list, ft_lstnew("third"));
	ft_lstadd_front(&list, ft_lstnew("second"));
	ft_lstadd_front(&list, ft_lstnew("first"));
	ft_lstadd_back(&list, ft_lstnew("fourth"));
	printf("%s\n", (char *)(list->content));
	printf("%s\n", (char *)(list->next->content));
	printf("%s\n", (char *)(list->next->next->content));
	printf("%s\n", (char *)(list->next->next->next->content));
}*/