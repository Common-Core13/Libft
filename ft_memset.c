/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:50:26 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 02:50:35 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n > 0)
	{
		*t = (unsigned char)c;
		n--;
		t++;
	}
	return (s);
}
// #include<stdio.h>

// int main()
// {
// 	int a = 0;
// 	int i = -1;
// 	int c = 555566;
// 	unsigned char g[5];
// 	int re = -1;
// 	// while (re++ < 4)
// 	// 	ft_memset((char *)&a + re,*((char *)&c + re), 1);

// 	// while(i > 0)
// 	// {
// 	// 	ft_memset(&g[i] , c % 256, 1);
// 	// 	c /= 256;
// 	// 	i--;
// 	// }
// 	// printf("%u", g[1]);
// 	while(++i < 4)
// 			ft_memset((char *)&a + i, ((char *)&c)[i], 1);
// 	printf("%d\n",a);

// }
