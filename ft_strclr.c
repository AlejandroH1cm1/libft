/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 21:05:07 by aherrera          #+#    #+#             */
/*   Updated: 2018/02/23 22:36:47 by aherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *as)
{
	if (!as || !*as)
		return ;
	while (*as != '\0')
	{
		*as = '\0';
		as = as + 1;
	}
}
