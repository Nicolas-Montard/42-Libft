/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:19:13 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/16 15:51:17 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list *list;

	list = ft_lstnew(ft_strdup("third"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("second")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("first")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("fourth")));
	printf("%s\n", (char *)(ft_lstlast(list)->content));
	ft_lstdelone(ft_lstlast(list), free);
	printf("%s\n", (char *)(ft_lstlast(list)->content));
}*/