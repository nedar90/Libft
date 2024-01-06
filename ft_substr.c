/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:04:11 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/16 16:04:55 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	conditions(int flag, int true_con, int false_con)
{
	if (flag)
	{
		return (true_con);
	}
	return (false_con);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		num;

	num = 0;
	s += conditions(start >= ft_strlen(s), ft_strlen(s), start);
	sub = (char *)malloc(sizeof(char) * \
	(conditions(len < ft_strlen(s), len, ft_strlen(s))) + 1);
	if (!sub)
		return (NULL);
	while (len > 0 && *s != '\0')
	{
		sub[num] = *s++;
		num++;
		len--;
	}
	sub[num] = '\0';
	return (sub);
}
