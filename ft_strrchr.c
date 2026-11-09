/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:58:49 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:23:49 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		last;
	char	*n;

	if (str == NULL)
		return (NULL);
	last = ft_strlen(str);
	n = (char *)str;
	str += last;
	while (n <= str && (unsigned char)c != (unsigned char)*str)
		str--;
	if (str >= n && (unsigned char)*str == (unsigned char)c)
		return ((char *)str);
	return (NULL);
}
