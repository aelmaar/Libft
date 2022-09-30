/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:19:10 by ael-maar          #+#    #+#             */
/*   Updated: 2022/09/30 20:24:42 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_cast;
	unsigned char	*src_cast;
	unsigned char	temp_cpy[len];
	size_t			i;

	dst_cast = dst;
	src_cast = (unsigned char *)src;

}
