/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:12:07 by aherrera          #+#    #+#             */
/*   Updated: 2018/02/23 22:34:07 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		new->content_size = content_size;
		new->content = malloc(content_size);
		ft_memcpy(new->content, (void *)content, content_size);
	}
	else
	{
		new->content_size = 0;
		new->content = NULL;
	}
	new->next = NULL;
	return (new);
}
