/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgarrid <adgarrid>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:57:13 by adgarrid          #+#    #+#             */
/*   Updated: 2024/12/03 11:57:14 by adgarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	int				i;
	unsigned char	*r;

	i = 0;
	r = s;
	while (i < size)
	{
		r[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
