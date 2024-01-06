/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:20:48 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/09 14:22:00 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		m;
	char	*cpydest;
	char	*cpysrc;

	cpydest = (char *)dest;
	cpysrc = (char *)src;
	m = n;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (m-- > 0)
			(cpydest)[m] = ((unsigned char *)src)[m];
	}
	else
	{
		while (n-- > 0)
			*cpydest++ = *cpysrc++;
	}
	return (dest);
}
