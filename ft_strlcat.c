/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:31:34 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/02 15:52:03 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= 0 || size <= dst_len)
		return (src_len + size);
	dst += dst_len;
	size = size - dst_len -1;
	while (size-- > 0 && *src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (src_len + dst_len);
}
