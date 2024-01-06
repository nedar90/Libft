/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:24:08 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/26 16:24:38 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		size;

	size = ft_lstsize(lst);
	if (!lst)
		return ;
	while (size > 0)
	{
		f(lst->content);
		lst = lst->next;
		size--;
	}
}
