/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:20:13 by mmahias           #+#    #+#             */
/*   Updated: 2021/01/05 15:20:16 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = (ft_strlen(s1) + 1);
	len_s2 = (ft_strlen(s2) + 1);
	i = (len_s1 + len_s2);
	str = malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	else
	{
		ft_strlcpy(str, s1, len_s1);
		ft_strlcat(str, s2, i);
	}
	return (str);
}
