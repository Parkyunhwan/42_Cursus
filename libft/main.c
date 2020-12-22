/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypark < ypark@student.42seoul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:15:37 by ypark             #+#    #+#             */
/*   Updated: 2020/12/22 18:51:38 by ypark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void ft_put(int c)
{
	char ch;

	ch = c;
	write(1, &ch, 1);
}

int main()
{
	unsigned char *p1, *p2;
	p1 = (unsigned char*) malloc(sizeof(unsigned char) * 10);
	p2 = (unsigned char*) malloc(sizeof(unsigned char) * 10);
	//bzero(p1, 10);

	char aa[] = "abcde";
	char bb[] = "zk();";

	printf("%s\n", ft_memcpy(aa+1, aa, 5));
}
