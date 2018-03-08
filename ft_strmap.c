/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:57:55 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/03 15:41:57 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if ((str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		str[i++] = f(*s);
		s++;
	}
	str[i] = '\0';
	return (str);
}
