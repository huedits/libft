/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:45:04 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/30 16:43:39 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_limit(int res, int c, int sig);

int	ft_atoi(const char *c)
{
	unsigned int	i;
	int				r;
	int				s;

	i = 0;
	r = 0;
	if (c[0] == '-')
	{
		s = -1;
		i++;
	}
	else
		s = 1;
	while (c[i])
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
		if (ft_check_limit(r, (c[1] - '0'), s) == 0)
			return (0);
		r = r * 10 + (c[i] - '0');
		i++;
	}
	return (r * s);
}

static int	ft_check_limit(int res, int c, int sig)
{
	if (sig > 0)
	{
		if (res > (~(1 << 31)) / 10)
			return (0);
		if ((res * 10) > ((~(1 << 31)) - c))
			return (0);
		return (1);
	}
	else
	{
		if (-res < (1 << 31) / 10)
			return (0);
		if ((-res * 10) < ((1 << 31) + c))
			return (0);
		return (1);
	}
}
