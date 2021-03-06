/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:18:54 by mmahias           #+#    #+#             */
/*   Updated: 2021/01/05 15:18:56 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (-nb);
	}
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd(((nb % 10) + '0'), fd);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd((nb + '0'), fd);
}
