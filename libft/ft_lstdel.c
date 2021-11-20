/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 18:37:58 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/17 21:02:31 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *aux;
	t_list *suivant;

	aux = *alst;
	while (aux)
	{
		suivant = aux->next;
		del(aux->content, aux->content_size);
		free(aux);
		aux = aux->next;
	}
	*alst = NULL;
}
