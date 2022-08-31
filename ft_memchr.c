/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:28:25 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/31 20:46:01 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned char	char_c;

	char_c = (unsigned char) c;
	str = (char *) s;
	while (n > 0)
	{
		if (*str == char_c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
