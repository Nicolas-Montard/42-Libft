/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:50:56 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/16 11:07:28 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list *list;

	list = ft_lstnew("third");
	ft_lstadd_front(&list, ft_lstnew("second"));
	ft_lstadd_front(&list, ft_lstnew("first"));
	printf("%s\n", (char *)(ft_lstlast(list)->content));
}*/