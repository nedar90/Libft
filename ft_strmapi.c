/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 09:31:39 by nrajabia          #+#    #+#             */
/*   Updated: 2022/12/25 09:32:02 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*array;
	int		num;

	num = -1;
	array = malloc(ft_strlen(s) +1 * sizeof(char));
	if (!array)
		return (NULL);
	while (s[++num] != '\0')
	{
		array[num] = f(num, s[num]);
	}
	array[num] = '\0';
	return (array);
}
