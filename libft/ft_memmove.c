/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:49:34 by ypark             #+#    #+#             */
/*   Updated: 2020/12/28 21:29:56 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp;
	const char	*s;

	if (dst == 0 && src == 0)
		return (0);
	if (dst <= src)
	{
		tmp = dst;
		s = src;
		while (len--)
			*tmp++ = *s++;
	}
	else
	{
		tmp = dst;
		tmp += len;
		s = src;
		s += len;
		while (len--)
			*--tmp = *--s;
	}
	return (dst);
}
/*
**	safe memcpy
** 	src is bigger than dst
** 	front copy
*/
/*
** src is smaller than dst
** back copy
*/
