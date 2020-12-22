/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark < ypark@student.42seoul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:27:16 by ypark             #+#    #+#             */
/*   Updated: 2020/12/22 18:35:51 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char *tmp;
	const char *s;

/*
** 	src is bigger than dst
** 	front copy
*/
	if (dst <= src)
	{
		tmp = dst;
		s = src;
		while (len--)
			*tmp++ = *s++;
	}
	else
	{
/*
** src is smaller than dst
** back copy
*/
		tmp = dst;
		tmp += len;
		s = src;
		s += len;
		while (len--)
			*--tmp = *--s;
	}
	return (dst);
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *tmp = dst;
	const char *s = src;

	while (n--)
		*tmp++ = *s++;
	return (dst);
}
