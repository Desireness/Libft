/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:49:03 by rauizqui          #+#    #+#             */
/*   Updated: 2025/01/20 14:16:49 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_cpy;
	const unsigned char	*src_cpy;

	if (!dst && !src)
		return (NULL);
	dst_cpy = (unsigned char *)dst;
	src_cpy = (const unsigned char *)src;
	if (dst_cpy < src_cpy)
	{
		while (n--)
			*dst_cpy++ = *src_cpy++;
	}
	else
	{
		dst_cpy += n - 1;
		src_cpy += n - 1;
		while (n--)
			*dst_cpy-- = *src_cpy--;
	}
	return (dst);
}

/* A C program to demonstrate working of memmove */

//int main() 
//{ 
//	char str1[] = "Geeks"; // Array of size 100 
//	char str2[] = "Quiz"; // Array of size 5 
//
//	puts("str1 before memmove "); 
//	puts(str1); 
//
//	/* Copies contents of str2 to sr1 */
//	memmove(str1, str2, sizeof(str2)); 
//
//	puts("\nstr1 after memmove "); 
//	puts(str1); 
//
//	return 0; 
//}
