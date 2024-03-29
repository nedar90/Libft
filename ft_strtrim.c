/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:41:27 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/16 17:41:44 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (TRUE);
		set++;
	}
	return (FALSE);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	int		len;
	char	*cpy;

	count = -1;
	while (ft_get(*s1, set))
		s1++;
	len = ft_strlen(s1) -1;
	while (ft_get(s1[len], set) && *s1 != '\0')
		len--;
	cpy = malloc((len +2) * sizeof(char));
	if (!cpy)
		return (NULL);
	cpy[len +1] = '\0';
	while (++count <= len)
		cpy[count] = *s1++;
	return (cpy);
}
