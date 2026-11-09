/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:42:38 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 07:26:40 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*j;

	if (!lst)
		return ;
	while (*lst)
	{
		j = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = j;
	}
}
