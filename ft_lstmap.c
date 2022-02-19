/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaavist <ahaavist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:09:21 by ahaavist          #+#    #+#             */
/*   Updated: 2022/02/19 04:13:35 by ahaavist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result_list;
	t_list	*new;
	t_list	*old;

	if (!lst || !f)
		return (NULL);
	old = lst;
	result_list = (*f)(ft_lstnew(old->content, old->content_size));
	if (!result_list)
		return (NULL);
	old = old->next;
	new = result_list;
	while (old != NULL)
	{
		new->next = (*f)(ft_lstnew(old->content, old->content_size));
		if (!new->next)
			return (ft_free_list(result_list));
		new = new->next;
		old = old->next;
	}
	return (result_list);
}
