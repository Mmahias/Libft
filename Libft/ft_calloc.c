/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 13:18:11 by mmahias           #+#    #+#             */
/*   Updated: 2021/01/05 13:18:37 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total;
	char	*str;

	i = 0;
	total = (nmemb * size);
	str = malloc(total);
	if (!str)
		return (NULL);
	while (i <= total)
		str[i++] = 0;
	return ((void *)str);
}
