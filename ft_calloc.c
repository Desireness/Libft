/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:31:42 by rauizqui          #+#    #+#             */
/*   Updated: 2024/12/05 11:31:42 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t size);

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(count * total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * total_size);
	return (ptr);
}