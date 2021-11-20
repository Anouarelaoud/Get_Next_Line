/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 14:23:20 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/07 18:34:28 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *memory;

	memory = (void *)malloc(size * sizeof(*memory));
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, size);
	return (memory);
}
