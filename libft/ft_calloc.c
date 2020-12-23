/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 02:39:45 by ypark             #+#    #+#             */
/*   Updated: 2020/12/24 02:56:38 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	*tmp;

	i = 0;
	if (!(tmp = (size_t *)malloc(size * count)))
		return (0);
	while (i < (count * size))
		tmp[i++] = 0;
	return ((void*)tmp);
}
