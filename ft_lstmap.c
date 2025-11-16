/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:59:56 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/16 14:42:16 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*f_content;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (0);
	new_list = 0;
	while (lst)
	{
		f_content = f(lst->content);
		new_node = ft_lstnew(f_content);
		if (!new_node)
		{
			if (f_content)
				del(f_content);
			ft_lstclear(&new_list, del);
			break ;
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*replace_str(void *str)
{
	return ((void *)ft_strdup("replaced"));
}

void	print_str(void *str)
{
	printf("%s\n", (char *)str);
}

int	main(void)
{
	t_list *list;
	t_list *other_list;

	list = ft_lstnew(ft_strdup("third"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("second")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("first")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("fourth")));
	other_list = ft_lstmap(list, replace_str, free);
	ft_lstiter(other_list, print_str);
	ft_lstclear(&list, free);
	// ft_lstclear(&other_list, free);
}*/