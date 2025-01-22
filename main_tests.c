/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:17:40 by rauizqui          #+#    #+#             */
/*   Updated: 2025/01/22 18:31:26 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//test ft_atoi

int main()
{
	char *str = "  -1234";
	printf("%d\n", ft_atoi(str));
	return (0);
}

//test ft_bzero

int main	()
{
	char *s = "Hello";
	ft_bzero(s, 3);
	printf("%s\n", s);
	return (0);
}

//test ft_calloc

int main()
{
	char *ptr;
	ptr = ft_calloc(10, sizeof(char));
	printf("%s\n", ptr);
	return (0);
}

//test ft_itoa

int main ()
{
	int n = 123;
	printf("%s\n", ft_itoa(n));
	return (0);
}

//test ft_memchr
int main ()
{
	char str[] = "Hello World";
	char *ptr;
	ptr = ft_memchr(str, 'W', 11);
	if (ptr != NULL)
		printf("Character found: %c\n", *ptr);
	else
		printf("Character not found\n");
	return (0);
}

//test ft_memcmp

int main ()
{
	char str1[] = "Hello World";
	char str2[] = "Hello World";
	int n = 11;
	printf("%d\n", ft_memcmp(str1, str2, n));
	return (0);
}

//test ft_memcpy

int main ()
{
	char src[] = "GeeksforGeeks";
	char dest[100];
	ft_memcpy(dest, src, strlen(src)+1);
	printf("Copied string is %s", dest);
	return 0;
}

//test ft_memmove

int main() 
{ 
	char str1[] = "Geeks"; // Array of size 100 
	char str2[] = "Quiz"; // Array of size 5 

	puts("str1 before memmove "); 
	puts(str1); 

	/* Copies contents of str2 to sr1 */
	memmove(str1, str2, sizeof(str2)); 

	puts("\nstr1 after memmove "); 
	puts(str1); 

	return 0; 
}

//test ft_memset

int main ()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	puts(str);
	ft_memset(str + 13, '.', 8*sizeof(char));
	puts(str);
	return 0;
}

//test ft_putchar_fd

int main ()
{
	char c = 'a';
	int fd = 1;
	ft_putchar_fd(c, fd);
	return 0;
}

//test ft_putendl_fd

int main ()
{
	char *s = "Hello World!";
	int fd = 1;
	ft_putendl_fd(s, fd);
	return 0;
}

//test ft_putnbr_fd

int main ()
{
	char *s = "Hello World!";
	int fd = 1;
	ft_putendl_fd(s, fd);
	return 0;
}

//test ft_putstr_fd

int main ()
{
	char *s = "Hello World!";
	int fd = 1;
	ft_putstr_fd(s, fd);
	return 0;
}

//test ft_split

int main()
{
	char const str[] = "esto es un test no lo ves";
	char c = ' ';
	char **split = ft_split(str, c);
	int i = 0;

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return 0;
}

//test ft_strchr

int main()
{
	const char str[] = "estoesuntest";
	char a = '4';
	char b = 'e';
	char c = 'l';
	char d = 'n';

	printf("%s\n", ft_strchr(str, a));
	printf("%s\n", ft_strchr(str, b));
	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", ft_strchr(str, d));
}

//test ft_strdup

int main ()
{
	char *s = "Hello World!";
	char *new = ft_strdup(s);
	printf("%s\n", new);
	return 0;
}

//test ft_striteri

int main  ()
{
	char *s = "Hello World!";
	void (*f)(unsigned int, char *);
	f = &ft_putchar_fd;
	ft_striteri(s, f);
	return 0;
}

//test ft_strjoin

int main ()
{
	char *s1 = "Hello ";
	char *s2 = "World!";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	return 0;
}

//test ft_strlcat

int main ()
{
	char dst[100] = "Hello";
	char src[100] = "World!";
	size_t size = 100;
	ft_strlcat(dst, src, size);
	printf("%s\n", dst);
	return 0;
}

//test ft_strlcpy

int main ()
{
	char dst[100] = "Hello";
	char src[100] = "World!";
	size_t dstsize = 100;
	ft_strlcpy(dst, src, dstsize);
	printf("%s\n", dst);
	return 0;
}

//test ft_strlen

int main ()
{
	char *s = "Hello World!";
	printf("%s\n", ft_strlen(s));
	return 0;
}

//test ft_strmapi

int main ()
{
	char *s = "Hello World!";
	char (*f)(unsigned int, char);
	f = &ft_toupper;
	char *str = ft_strmapi(s, f);
	printf("%s\n", str);
	return 0;
}

//test ft_strncmp

int main()
{
	printf("%s", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	unsigned char to return (no matter what) unsigned
}

//test ft_strnstr

int main ()
{
	char *big = "Hello World!";
	char *little = "World";
	size_t len = 100;
	char *str = ft_strnstr(big, little, len);
	printf("%s\n", str);
	return 0;
}

//test ft_strrchr

int main()
{
	const char str[] = "hola";

	int c  = 'a';
	int d	= 'h';
	printf("%s", ft_strrchr(str, c));
}

//test ft_strtrim

int main ()
{
	char *s1 = "   Hello World!   ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	printf("%s\n", trimmed);
	return 0;
}

//test ft_substr 

int main ()
{
	char *s = "Hello World!";
	unsigned int start = 6;
	size_t len = 5;
	char *substr = ft_substr(s, start, len);
	printf("%s\n", substr);
	return 0;
}


