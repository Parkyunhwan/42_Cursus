/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:54:06 by ypark             #+#    #+#             */
/*   Updated: 2020/12/23 23:11:09 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	int diff;

	diff = 'a' - 'A';
	if ('A' <= c && c <= 'Z')
		return (c + diff);
	else
		return (c);
}
