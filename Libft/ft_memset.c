/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:41:27 by rauizqui          #+#    #+#             */
/*   Updated: 2025/01/20 12:41:30 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	unsigned char		*r;
	size_t				i;

	i = 0;
	r = (unsigned char *)s;
	while (i < size)
	{
		r[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
