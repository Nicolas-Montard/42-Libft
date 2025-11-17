/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:46:11 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/16 11:07:17 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	print_str(void *str)
{
	printf("%s\n", (char *)str);
}

int	main(void)
{
	t_list *list;

	list = ft_lstnew("third");
	ft_lstadd_front(&list, ft_lstnew("second"));
	ft_lstadd_front(&list, ft_lstnew("first"));
	ft_lstadd_back(&list, ft_lstnew("fourth"));
	ft_lstiter(list ,print_str);
}*/