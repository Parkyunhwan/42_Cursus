/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:27:16 by ypark             #+#    #+#             */
/*   Updated: 2020/12/28 21:03:09 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*tmp;
	const unsigned char	*s;

	if (dst == 0 && src == 0)
		return (0);
	tmp = dst;
	s = src;
	while (n--)
		*tmp++ = *s++;
	return (dst);
}
