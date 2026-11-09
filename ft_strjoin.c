/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:57:27 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:25:15 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_join_to(char const *str, char *pass)
{
	int	i;

	i = 0;
	while (str[i])
	{
		pass[i] = str[i];
		i++;
	}
	pass[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pass;
	size_t	all_len;

	if (!s1 || !s2)
		return (NULL);
	all_len = ft_strlen(s1) + ft_strlen(s2);
	pass = malloc(sizeof(char) * (all_len + 1));
	if (pass == NULL)
		return (NULL);
	ft_join_to(s1, pass);
	ft_join_to(s2, pass + ft_strlen(s1));
	return (pass);
}
