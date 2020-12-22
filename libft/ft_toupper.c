/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark < ypark@student.42seoul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:49:08 by ypark             #+#    #+#             */
/*   Updated: 2020/12/22 16:41:38 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int diff = 'a' - 'A';
	if ('a' <= c && c <= 'z')
		return (c - diff);
	else
		return (c);
}
