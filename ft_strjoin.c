/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ele-cren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:23:19 by ele-cren          #+#    #+#             */
/*   Updated: 2016/12/19 10:45:31 by ele-cren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_strjoin_an(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(*str) * (ft_strlen((char *)s1) + \
				ft_strlen((char *)s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[j] = s1[i++];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i++];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 && s2)
		return (ft_strjoin_an(s1, s2));
	return (NULL);
}
