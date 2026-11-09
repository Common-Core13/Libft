/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:48:39 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:26:06 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*one = (const unsigned char *)s1;
	const unsigned char	*two = (const unsigned char *)s2;

	if (n == 0)
		return (0);
	while (*two == *one && n - 1 > 0)
	{
		one++;
		two++;
		n--;
	}
	return (*one - *two);
}
