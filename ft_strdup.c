/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:51:06 by nrajabia          #+#    #+#             */
/*   Updated: 2022/09/07 15:53:13 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*ptr;
	int		count;

	count = -1;
	ptr = malloc(ft_strlen(s) +1 * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[++count] != '\0')
		ptr[count] = s[count];
	ptr[count] = '\0';
	return (ptr);
}
