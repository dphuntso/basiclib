/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 15:08:08 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/04 13:52:33 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	ret;

	len = ft_strlen(dst);
	ret = len;
	if (dstsize && len < dstsize)
	{
		while ((dstsize - len - 1) && *src)
		{
			dst[len++] = *src;
			src++;
		}
		dst[len] = '\0';
	}
	if ((ret + ft_strlen(src)) < dstsize)
		return (ret + len);
	if (ret < dstsize)
		return (len + ft_strlen(src));
	return (dstsize + ft_strlen(src));
}
