/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 16:36:40 by ypark             #+#    #+#             */
/*   Updated: 2020/12/28 23:52:08 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(long n)
{
	if (n < 10)
		return (1);
	else
		return (get_size(n / 10) + 1);
}

char			*ft_itoa(int n)
{
	size_t	size;
	size_t	i;
	char	*tmp;
	long	val;

	val = n;
	if (n < 0)
		val *= -1;
	size = get_size(val);
	size = n < 0 ? size + 1 : size;
	if (!(tmp = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (i < size)
	{
		tmp[size - i - 1] = (val % 10) + '0';
		val /= 10;
		i++;
	}
	tmp[0] = n < 0 ? '-' : tmp[0];
	tmp[i] = 0;
	return (tmp);
}
