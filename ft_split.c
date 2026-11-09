/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:53:41 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:12:14 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calcul(char const *s, char c)
{
	int	i;
	int	sep_nb;

	i = 0;
	sep_nb = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			sep_nb++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (sep_nb);
}

static char	*ft_copy(char const *s, char c)
{
	char	*t;
	int		count;
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	count = i;
	t = malloc(sizeof(char) * (count + 1));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		t[i] = s[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

static int	ft_add_word(char **sub, char const **s, char c, int j)
{
	sub[j] = ft_copy(*s, c);
	if (!sub[j])
		return (0);
	while (**s && **s != c)
		(*s)++;
	return (1);
}

static int	ft_fill_sub(char **sub, char const *s, char c)
{
	int	j;

	j = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_add_word(sub, &s, c, j))
			{
				while (j > 0)
					free(sub[--j]);
				free(sub);
				return (0);
			}
			j++;
		}
	}
	sub[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**sub;
	int		len;

	if (!s)
		return (NULL);
	len = calcul(s, c);
	sub = malloc(sizeof(char *) * (len + 1));
	if (!sub)
		return (NULL);
	if (!ft_fill_sub(sub, s, c))
		return (NULL);
	return (sub);
}
