/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark < ypark@student.42seoul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 01:22:54 by ypark             #+#    #+#             */
/*   Updated: 2020/12/22 16:46:36 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isupper(int c)
{
    if ('A' <= c && c <= 'Z')
        return (1);
    else
        return (0);
}

int ft_islower(int c)
{
    if ('a' <= c && c <= 'z')
        return (1);
    else
        return (0);
}

int ft_isalpha(int c)
{
    if (ft_isupper(c) || ft_islower(c))
        return (1);
    else
        return (0);
}
