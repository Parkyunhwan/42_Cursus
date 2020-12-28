/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 18:53:40 by ypark             #+#    #+#             */
/*   Updated: 2020/12/28 21:27:08 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, \
					int c, size_t n)
{
	unsigned char		*tmp;
	const unsigned char	*s;

	if (dst == 0 && src == 0)
		return (0);
	tmp = dst;
	s = src;
	while (n--)
	{
		*tmp++ = *s++;
		if (*(tmp - 1) == (unsigned char)c)
			return (tmp);
	}
	return (0);
}
