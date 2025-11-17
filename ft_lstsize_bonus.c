/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontard <nmontard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:39:34 by nmontard          #+#    #+#             */
/*   Updated: 2025/11/15 15:02:42 by nmontard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
/*
int main(void)
{
	t_list *list;

	list = ft_lstnew("second");
	ft_lstadd_front(&list, ft_lstnew("first"));
	printf("%d\n", ft_lstsize(list));
}*/