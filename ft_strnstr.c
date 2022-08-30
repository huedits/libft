/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimatheu <vimatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:15:26 by vimatheu          #+#    #+#             */
/*   Updated: 2022/08/30 20:25:43 by vimatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!needle[0])
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		while (haystack[i] == needle[i] && (len - i) > 0)
		{
			if (!needle[i])
				return ((char *)haystack);
			i++;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
