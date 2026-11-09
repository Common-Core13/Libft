/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:33:09 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:23:42 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found_it(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*t;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && found_it(s1[start], set))
		start++;
	while (end > start && found_it(s1[end - 1], set))
		end--;
	t = malloc(sizeof(char) * (end - start + 1));
	if (!t)
		return (NULL);
	i = 0;
	while (start < end)
		t[i++] = s1[start++];
	t[i] = '\0';
	return (t);
}
