/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:26:57 by ael-maar          #+#    #+#             */
/*   Updated: 2022/10/03 14:52:11 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	/*
	char	*begin_trim;
	char	*end_trim;
	char	*trim;

	begin_trim = ft_strnstr(s1, set, ft_strlen(s1));
	begin_trim = begin_trim + ft_strlen(set);
	end_trim = ft_strnstr(begin_trim, set, ft_strlen(begin_trim));
	*end_trim = '\0';
	trim = ft_strdup(begin_trim);
	return (trim);
	*/

	size_t	start;
	size_t	end;
	size_t	i;
	// size_t	temp;
	char	*str_trim;

	start = 0;
	i = 0;
	end = ft_strlen(s1);

	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	// str_trim = malloc((end - start + 1) * sizeof(char));
	// i = 0;
	// temp = start;
	// while (i < (end - start))
	// {
	// 	str_trim[i++] = s1[temp];
	// }
	// str_trim[i] = '\0';
	str_trim = ft_substr(s1, start, (end - start + 1));
	return (str_trim);
}
