/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:14:58 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/10 11:14:34 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (!dest && !src)
		return (0);
	if (size == 0)
		return (len);
	while (--size > 0 && *src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (len);
}
