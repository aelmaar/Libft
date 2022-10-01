/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:02:12 by ael-maar          #+#    #+#             */
/*   Updated: 2022/10/01 20:14:56 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!new_str)
		return (0);
	i = 0;
	j = 0;
	while (i < s1_len)
	{
		new_str[i++] = s1[i];
		j++;
	}
	i = 0;
	while (i < s2_len)
	{
		new_str[j++] = s2[i++];
	}
	return (new_str);
}
