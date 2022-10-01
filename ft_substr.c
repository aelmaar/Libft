/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:17:51 by ael-maar          #+#    #+#             */
/*   Updated: 2022/10/01 20:00:42 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;


	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (0);
	i = 0;
	while (i < len)
	{
		sub_str[i++] = s[start];
		start++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
