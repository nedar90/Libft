/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:30:25 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/26 14:30:50 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstnode;

	if (!lst | !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		lstnode = ft_lstlast(*lst);
		lstnode->next = new;
	}
}
