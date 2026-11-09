/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molatif <molatif@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:51:50 by moaltif           #+#    #+#             */
/*   Updated: 2026/11/09 02:52:37 by molatif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*last;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_node;
		else
			last->next = new_node;
		last = new_node;
		lst = lst->next;
	}
	return (new_list);
}

// static void	*f(void *content)
// {
// 	char	*t;
// 	int		i;
// 	char	*g;

// 	t = (char *)content;
// 	i = ft_strlen(content);
// 	g = malloc(sizeof(char) * (i + 1));
// 	i = 0;
// 	while (*t)
// 	{
// 		g[i] = *t - 32;
// 		t++;
// 		i++;
// 	}
// 	g[i] = '\0';
// 	return (g);
// }

// static void	del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	char t = 0;
// }