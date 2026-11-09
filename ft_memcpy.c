/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:49:07 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:26:01 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		h;
	char		*g;
	const char	*f;

	h = 0;
	g = dest;
	f = src;
	while (h < n)
	{
		g[h] = f[h];
		h++;
	}
	return (dest);
}
