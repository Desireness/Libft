/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 23:12:00 by rauizqui          #+#    #+#             */
/*   Updated: 2025/01/14 23:12:01 by rauizqui         ###   ########.fr       */
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

//int main() 
//{
//    char buffer[14];
//    ft_memset(buffer, 'c', sizeof(buffer));
//    for (int i = 0; i < 10; i++) {
//        printf("%c ", buffer[i]);
//    }
//    return 0;
//}
//
