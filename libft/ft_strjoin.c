/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:39:39 by ypark             #+#    #+#             */
/*   Updated: 2020/12/26 11:59:20 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(new = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (0);
	ft_memcpy(new, s1, len1);
	ft_memcpy(new + len1, s2, len2);
	new[len1 + len2] = 0;
	return (new);
}
