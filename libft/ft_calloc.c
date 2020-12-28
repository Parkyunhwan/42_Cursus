/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 02:39:45 by ypark             #+#    #+#             */
/*   Updated: 2020/12/28 22:09:46 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!(tmp = (char *)malloc(size * count)))
		return (0);
	while (i < (count * size))
		tmp[i++] = 0;
	return ((void*)tmp);
}
