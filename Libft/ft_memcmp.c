/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:55:15 by rauizqui          #+#    #+#             */
/*   Updated: 2024/12/03 12:55:15 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr[i] != ptr2[i])
			return (ptr[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
    char str1[] = "abcdef";
    char str2[] = "abcdef";
    char str3[] = "abcdeg";
    char str4[] = "abcd";

    printf("Test 1: %d\n", ft_memcmp(str1, str2, 6));
    printf("Test 2: %d\n", ft_memcmp(str1, str3, 6));
    printf("Test 3: %d\n", ft_memcmp(str1, str4, 4));
    printf("Test 4: %d\n", ft_memcmp(str1, str2, 0));
    return 0;
}*/
