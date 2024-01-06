/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:10:31 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/04 12:10:54 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cpydest;
	char	*cpysrc;

	cpydest = (char *)dest;
	cpysrc = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (n-- > 0)
		*cpydest++ = *cpysrc++;
	return (dest);
}
