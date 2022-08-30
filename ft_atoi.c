/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:45:04 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/31 01:12:48 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int				res;
	int				sig;

	res = 0;
	sig = 1;
	while (*c == ' ' || (*c >= 8 && *c <= 14))
		c++;
	if (*c == '+' || *c == '-')
	{
		if (*c == '-')
			sig *= -1;
		c++;
	}
	while (ft_isdigit(*c))
	{
		res = res * 10 + (*c - '0');
		c++;
	}
	return (res * sig);
}
