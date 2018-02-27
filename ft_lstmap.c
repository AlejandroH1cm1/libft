/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:51:53 by aherrera          #+#    #+#             */
/*   Updated: 2018/02/22 16:54:48 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map;
	t_list *tmp;

	map = (t_list *)malloc(sizeof(t_list));
	map = (*f)(lst);
	tmp = map;
	while (lst->next != NULL)
	{
		tmp->next = (t_list *)malloc(sizeof(t_list));
		tmp->next = (*f)(lst->next);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (map);
}
