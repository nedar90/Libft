/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:34:15 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/04 12:34:42 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;

	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n > 0 && *cpy_s1 == *cpy_s2)
	{
		cpy_s1++;
		cpy_s2++;
	}
	if (*cpy_s1 != *cpy_s2)
		return (*cpy_s1 - *cpy_s2);
	if (n > 0)
		return (*cpy_s1 - *cpy_s2);
	return (0);
}
