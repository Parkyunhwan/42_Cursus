/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 02:57:44 by ypark             #+#    #+#             */
/*   Updated: 2020/12/29 20:22:13 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dest, char *restrict src, size_t size)
{
	size_t	dest_max_len;
	size_t	src_iter;
	size_t	src_len;

	dest_max_len = 0;
	src_len = 0;
	while (dest[dest_max_len] && dest_max_len < size)
		dest_max_len++;
	src_iter = 0;
	while (src[src_iter] && dest_max_len + src_iter + 1 < size)
	{
		dest[dest_max_len + src_iter] = src[src_iter];
		src_iter++;
	}
	if (dest_max_len < size)
		dest[dest_max_len + src_iter] = '\0';
	src_len = ft_strlen(src);
	return (dest_max_len + src_len);
}
/*
** size < dst_len -> src_len + size
** size > dst_len -> src_len + dst_len
*/
