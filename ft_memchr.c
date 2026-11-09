/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:47:09 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/05 21:18:21 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*j = (const unsigned char *)s;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (j[i] == (char)c)
			return ((char *)&j[i]);
		i++;
	}
	return (NULL);
}
