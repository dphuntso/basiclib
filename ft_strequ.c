/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 11:38:56 by dphuntso          #+#    #+#             */
/*   Updated: 2018/02/27 11:51:54 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	while (*s1)
	{
		if (*s2)
		{
			if (*s1 != *s2)
				return (0);
		}
		else
			return (0);
		s1++;
		s2++;
	}
	if (*s2)
		return (0);
	return (1);
}
