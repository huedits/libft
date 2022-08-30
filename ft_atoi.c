/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:45:04 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/31 01:04:57 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_limit(int res, int c, int sig);

int	ft_atoi(const char *c)
{
	unsigned int	i;
	int				res;
	int				sig;

	i = 0;
	res = 0;
	sig = 1;
	while (c[i] == ' ' || c[i] == '\t' || c[i] == '\n'
		|| c[i] == '\v' || c[i] == '\f' || c[i] == '\r')
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '-')
			sig *= -1;
		i++;
	}
	while (c[i])
	{
		if (!ft_isdigit(c[i]))
			return (0);
		if (ft_check_limit(res, (c[i] - '0'), sig) == 0)
			return (0);
		res = res * 10 + (c[i] - '0');
		i++;
	}
	return (res * sig);
}

static int	ft_check_limit(int res, int nbr, int sig)
{
	if (sig > 0)
	{
		if (res > (~(1 << 31)) / 10)
			return (0);
		if ((res * 10) > ((~(1 << 31)) - nbr))
			return (0);
		return (1);
	}
	else
	{
		if (res < (1 << 31) / 10)
			return (0);
		if ((res * 10) < ((1 << 31) + nbr))
			return (0);
		return (1);
	}
}
