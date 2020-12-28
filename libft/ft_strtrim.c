/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 12:00:39 by ypark             #+#    #+#             */
/*   Updated: 2020/12/28 23:51:38 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*tmp;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (0 <= len && ft_strchr(set, s1[len]))
		len--;
	if (i > len)
		return (ft_strdup(""));
	if (!(tmp = (char *)malloc(sizeof(char) * (len - i + 2))))
		return (0);
	ft_strlcpy(tmp, s1 + i, len - i + 2);
	return (tmp);
}
/*
** len - i + 1 -> word length
** len - i + 2 -> word length + \0
*/
