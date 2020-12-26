/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 02:50:03 by ypark             #+#    #+#             */
/*   Updated: 2020/12/27 03:04:42 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_recnbr_fd(long n, int fd)
{
	char ch;

	if (n < 10)
	{
		ch = n + '0';
		write(fd, &ch, 1);
		return ;
	}
	else
	{
		ch = (n % 10) + '0';
		ft_recnbr_fd(n / 10, fd);
		write(fd, &ch, 1);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	long	val;
	char	ch;

	val = n;
	if (val < 0)
	{
		write(fd, "-", 1);
		val *= -1;
	}
	if (val > 9)
		ft_recnbr_fd(val / 10, fd);
	ch = (val % 10) + '0';
	write(fd, &ch, 1);
}
