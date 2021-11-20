/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 22:48:24 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/15 22:49:13 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_size(char const *str, char c, int k)
{
	int		word_size;

	word_size = 0;
	while (str[k] != c && str[k] != '\0')
	{
		word_size++;
		k++;
	}
	return (word_size);
}
