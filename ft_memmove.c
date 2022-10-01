/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:19:10 by ael-maar          #+#    #+#             */
/*   Updated: 2022/10/01 16:26:07 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_cast;
	unsigned char	*temp_buf;
	size_t			i;

	dst_cast = dst;
	i = 0;
	temp_buf = (unsigned char []){"10"};
	ft_memcpy(temp_buf, src, len);
	i = 0;
	while (i < len)
	{
		dst_cast[i] = temp_buf[i];
		i++;
	}
	return (dst);
}
