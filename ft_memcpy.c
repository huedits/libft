/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:48:35 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/30 17:00:24 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	*intdest;
	int	*intsrc;

	intdest = (int *) dst;
	intsrc = (int *) src;
	if (n == 0)
		return (NULL);
	while (n > 0 && intsrc[n - 1])
	{
		intdest[n - 1] = intsrc[n - 1];
		n--;
	}
	return (dst);
}
