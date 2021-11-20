/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-el- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 20:57:04 by aait-el-          #+#    #+#             */
/*   Updated: 2018/10/18 18:32:55 by aait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		t[3];
	char	**new_s;

	t[0] = 0;
	t[2] = 0;
	if (s == NULL)
		return (NULL);
	if (!(new_s = (char **)malloc((ft_nbr_words(s, c) + 1) * sizeof(char*))))
		return (NULL);
	while (s[t[2]])
	{
		while (s[t[2]] == c && s[t[2]])
			t[2]++;
		if (s[t[2]])
		{
			t[1] = 0;
			new_s[t[0]] = (char *)malloc(ft_word_size(s, c, t[2]) + 1);
			while (s[t[2]] != c && s[t[2]])
				new_s[t[0]][t[1]++] = s[t[2]++];
			new_s[t[0]++][t[1]] = '\0';
		}
	}
	new_s[t[0]] = 0;
	return (new_s);
}
