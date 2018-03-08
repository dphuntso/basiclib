/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:45:44 by dphuntso          #+#    #+#             */
/*   Updated: 2018/02/24 00:23:57 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;
	size_t	dstlen;

	dstlen = ft_strlen(s1);
	str = s1;
	while (*str)
		str++;
	while (n)
	{
		if (*s2)
			*str = *s2;
		else
		{
			*str = '\0';
			break ;
		}
		s2++;
		str++;
		n--;
	}
	return (s1);
}
