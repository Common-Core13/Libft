/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:58:36 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:23:53 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	u;

	if (*little == '\0')
		return ((char *)big);
	u = 0;
	while (*big && len > 0)
	{
		little -= u;
		u = 0;
		while (u < len && *(big + u) == *little && *little)
		{
			little++;
			u++;
		}
		if (!*little)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
