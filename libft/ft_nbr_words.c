/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 22:33:17 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/15 22:52:33 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr_words(char const *str, char c)
{
	int		nbr;
	int		i;

	nbr = 0;
	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] != c && str[i])
		{
			i = i + ft_word_size(str, c, i);
			nbr++;
		}
		else
			i++;
	}
	return (nbr);
}
