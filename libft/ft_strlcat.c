/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 02:57:44 by ypark             #+#    #+#             */
/*   Updated: 2020/12/23 23:11:03 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *restrict dest, char *restrict src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	tmp;

	i = 0;
	while (dest[i])
		i++;
	tmp = i;
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j])
		j++;
	if (size < tmp)
		return (j + size);
	else
		return (j + tmp);
}
