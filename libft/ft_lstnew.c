/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 15:11:04 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/14 18:16:51 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*frais;

	frais = (t_list *)malloc(sizeof(t_list));
	if (frais == NULL)
		return (NULL);
	if (content == NULL)
	{
		frais->content = NULL;
		frais->content_size = 0;
	}
	else
	{
		frais->content = (void *)malloc(sizeof(char) * content_size);
		if (frais->content == NULL)
		{
			free(frais);
			return (NULL);
		}
		frais->content = ft_memcpy(frais->content, content, content_size);
		frais->content_size = content_size;
	}
	frais->next = NULL;
	return (frais);
}
