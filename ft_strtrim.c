/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:26:57 by ael-maar          #+#    #+#             */
/*   Updated: 2022/10/02 20:44:35 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str_trim;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (ft_strchr(s1, set[start]))
		start++;
	while (ft_strrchr(s1 + end, set[i]))
	{
		end--;
		i++;
	}
	str_trim = ft_substr(s1, start, end - start);
	return (str_trim);
}
