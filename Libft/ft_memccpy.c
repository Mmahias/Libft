/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:16:20 by mmahias           #+#    #+#             */
/*   Updated: 2021/01/05 15:16:23 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_dest;
	unsigned char	*uc_src;

	i = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	while (i < n)
	{
		uc_dest[i] = uc_src[i];
		if (uc_src[i] == (unsigned char)c)
			return (dest + (i + 1));
		i++;
	}
	return (NULL);
}
