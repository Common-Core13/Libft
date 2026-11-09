/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 05:11:08 by molatif           #+#    #+#             */
/*   Updated: 2026/11/09 06:51:56 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*st;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	st = malloc(n * size);
	if (!st)
		return (NULL);
	ft_bzero(st, (n * size));
	return (st);
}
