/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark <ypark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:47:34 by ypark             #+#    #+#             */
/*   Updated: 2020/12/29 21:04:28 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_word(const char *s, char c)
{
	size_t i;
	size_t count;
	size_t in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (!in_word && s[i] != c)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char		*copy_word(const char *s, char c, size_t *offset)
{
	int		i;
	int		len;
	char	*tmp;
	int		save;

	i = 0;
	len = 0;
	while (s[*offset] == c)
		*offset += 1;
	while (s[*offset + len] != c && s[*offset + len] != '\0')
		len++;
	if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	save = len;
	while (i < len)
	{
		tmp[i] = s[*offset + i];
		i++;
	}
	tmp[i] = 0;
	*offset += len;
	return (tmp);
}

static	void	word_free(char **ret, int num)
{
	int i;

	i = 0;
	while (i <= num)
	{
		free(ret[i]);
		i++;
	}
	free(ret);
}

char			**ft_split(char const *s, char c)
{
	size_t		count;
	char		**ret;
	size_t		i;
	size_t		offset;

	if (!s)
		return (0);
	count = count_word(s, c);
	if (!(ret = (char**)malloc(sizeof(char *) * (count + 1))))
		return (0);
	offset = 0;
	i = 0;
	while (i < count)
	{
		if (!(ret[i] = copy_word(s, c, &offset)))
		{
			word_free(ret, i);
			break ;
		}
		i++;
	}
	if (i == count)
		ret[i] = 0;
	return (ret);
}
