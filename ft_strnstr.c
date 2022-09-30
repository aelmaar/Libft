/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:52:25 by ael-maar          #+#    #+#             */
/*   Updated: 2022/09/30 18:36:27 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	check_str;
	size_t	needle_len;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (*haystack && i < len)
	{
		check_str = 0;
		j = i;
		while (haystack[check_str]
			&& haystack[check_str] == needle[check_str] && j < len)
		{
				j++;
				check_str++;
		}
		if (check_str == needle_len)
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (0);
}
