/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 02:16:29 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/30 16:31:26 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	if (n == 0)
		return ;
	str = (char *)s;
	i = 0;
	while (i < n && str[i] != '\0')
	{
		str[i] = 0;
		i++;
	}
}
