/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 01:58:25 by ypark             #+#    #+#             */
/*   Updated: 2020/12/24 02:39:11 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (c == '\t' || c == '\v' || c == '\n' || \
		c == '\r' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	long long	i;
	long long	val;
	int			minus;

	i = 0;
	val = 0;
	minus = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			minus = -1;
	while (ft_isdigit(str[i]))
	{
		val *= 10;
		val += (str[i] - '0');
		i++;
	}
	val *= minus;
	return (val);
}