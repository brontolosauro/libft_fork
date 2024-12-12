#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	//ft_itoa
	int n = -21;
//	printf("n = %d\n", n);
	int r = n % 10;
	n /= 10;
	printf("21 / 10 = %d, con resto = %d\n", n, r); 
//	//ft_strjoin
//	char *s1 = "my favorite animal is";
//	char *s2 = " ";
//	char *s3 = "the nyancat";
//	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
//	printf("%s\n", res);
//	//ft_memcpy
//	char s[] = "Lorem ipsum sic amet";
//	printf("test con memcpy originale \n");
//	printf("originale: \"%s\"\n", s);
//	void	*src;
//	void	*dest;
//	src = s;
//	dest = ((unsigned char *)s + ft_strlen(s) - 3);
////	memcpy(dest, src, 5);
//	memcpy(dest, src, ft_strlen(s) + 1);
////	ft_memcpy(dest, src, ft_strlen(s) + 1);
//	printf("modificata: \"%s\"\n", s);
////	printf("\n ------------ \n");
////	printf("test con ft_memcpy\n");
////	printf("originale: \"%s\"\n", s);
////	dest = ((unsigned char *)s + ft_strlen(s) - 7);
////	ft_memcpy(dest, src, 9);
////	printf("modificata: \"%s\"\n", s);
////
//	//ft_memset
//	char	s[] = "Lorem ipsum sic amet";
//	size_t	len = 3;
//	int		c = 113;
//
//	printf("before memset s = %s\n", s);
//	ft_memset(s, c, len);
//	printf("after memset(s, %d, %lu) = %s\n", c, len,  s);
//
//	//ft_memcmp
//	char myStr1[] = "ABBD";
//	char myStr2[] = "ABCE";
//	int cmp = ft_memcmp(myStr1, myStr2, 3);
//
//	if (cmp > 0) {
//		printf("%s is greater than %s\n", myStr1, myStr2);
//	} else if (cmp < 0) {
//		printf("%s is greater than %s\n", myStr2, myStr1);
//	} else {
//		printf("%s is equal to %s\n", myStr1, myStr2);
//	}
//	//ft_memchr
//	char myStr[] = "Hello World!";
//	char *myPtr = (char*)ft_memchr(myStr, 'o', 12);
//	if (myPtr != NULL) {
//		printf("%s\n", myPtr);
//	}
//	//ft_calloc
//	 // Allocate memory for a number of items
//	int numItems = 15;
//	int *myArray = ft_calloc(numItems, sizeof(int));
//
//	// Write into the memory
//	for(int i = 0; i < numItems; i++) {
//	myArray[i] = i + 1;
//	}
//
//	// Display the contents of the memory
//	for(int i = 0; i < numItems; i++) {
//	printf("%d ", myArray[i]);
//	}
//
//	printf("\n");
//	// Free the memory
//	free(myArray);
//	myArray = NULL;
//	//ft_bzero	
//	char	s[] = "Lorem ipsum sic amet";
//	int		len = 3;
//	int		i = 0;
//
//	printf("before bzero s = %s\n", s);
//	ft_bzero(s, len);
//	while(i <= len)
//	{
//		printf("after bzero s[%d] =%s\n", i,  &s[i]);
//		i++;
//	}
//	printf("cosa resta nelle celle non toccate da bzero:\n%s\n",
//	s+len*sizeof(char));

//
//	//ft_strdup
//	const char	*s = "Foo Bar	Baz";
//	char		*p;
//	p = ft_strdup(s);
//	if (p != NULL)
//		printf("ft_strdup(%s) = %s", s, p);
//	else
//		printf("ft_strdup(%s) = NULL", s);
//	//ft_strnstr
//	const char	*largestring = "Foo Bar	Baz";
//	const char	*smallstring = "Bar";
//	size_t		len = 7;
//	char *ptr;
//
//	ptr = ft_strnstr(largestring,	smallstring, len);
//	if (ptr != NULL)
//		printf("ft_strnstr(%s, %s, %d) = %s\n", largestring, smallstring, 
//		(int)len, ptr);
//	else
//		printf("ft_strnstr(%s, %s, %d) = NULL\n", largestring, smallstring,
//		(int)len);
//
	//ft_strncmp
//	char myStr1[] = "ABCD";
//	char myStr2[] = "ABCE";
//	int cmp = ft_strncmp(myStr1, myStr2, 3);
//	cmp = ft_strncmp(myStr1, myStr2, 3);
//	if (cmp > 0) {
//    printf("%s is greater than %s\n", myStr1, myStr2);
//  	} else if (cmp < 0) {
//    printf("%s is greater than %s\n", myStr2, myStr1);
//  	} else {
//    printf("%s is equal to %s\n", myStr1, myStr2);
//  	}	
//
//	//	ft_strrchr
//	//	ft_strchr
//	char myStr[] = "Hello World";
//	char *myPtr = ft_strchr(myStr, 'o');
//	char *myPtr2 = ft_strrchr(myStr, 'o');
//	printf("myStr[] = %s\n", myStr);
//	if (myPtr != NULL) {
//  	printf("ft_strchr(myStr, 'W') = %s\n", myPtr);
//	}
//	else
//	  	printf("ft_strchr(myStr, 'W') = NULL\n");
//	if (myPtr2 != NULL) {
//  	printf("ft_strrchr(myStr, 'W') = %s\n", myPtr2);
//	}
//	else
//	  	printf("ft_strrchr(myStr, 'W') = NULL\n");

//	//	ft_atoi
//	char str[] = "Today's temperature is 24 degrees";
//	printf("str[]=\"%s\"\n", str);
//	int amount = ft_atoi(str);
//	printf("ft_atoi(str) = %d\n", amount);

////	ft_isdigit
//	int		c;
//	c = 48;
//	printf("dato %c ft_isdigit = %d \n", c, ft_isdigit(c));
//	c = 64;
//	printf("dato %c ft_isdigit = %d \n", c, ft_isdigit(c));

////	ft_isalpha
//	int		c;
//	c = 80;
//	printf("dato %c ft_isalpha = %d \n", c, ft_isalpha(c));

//	ft_isalnum
//	int		c;
//	c = 80;
//	printf("dato %c ft_isalnum = %d \n", c, ft_isalnum(c));
//	c = 49;
//	printf("dato %c ft_isalnum = %d \n", c, ft_isalnum(c));
//	c = 33;
//	printf("dato %c ft_isalnum = %d \n", c, ft_isalnum(c));
////	ft_isprint
//	int		c;
//	c = 9;
//	printf("dato %c ft_isprint = %d \n", c, ft_isprint(c));
//	c = 41;
//	printf("dato %c ft_isprint = %d \n", c, ft_isprint(c));
////	ft_isascii
//	int		c;
//	c = 9;
//	printf("dato %c ft_isascii = %d \n", c, ft_isascii(c));
//	c = '\200';
//	printf("dato %c ft_isascii = %d \n", c, ft_isascii(c));
////	ft_tolower
//	int		c;
//	c = 'B';
//	printf("dato %c ft_tolower = %c \n", c, ft_tolower(c));
//	c = '7';
//	printf("dato %c ft_tolower = %c \n", c, ft_tolower(c));
////	ft_toupper
//	int		c;
//	c = 'B';
//	printf("dato %c ft_toupper = %c \n", c, ft_toupper(c));
//	c = 'f';
//	printf("dato %c ft_toupper = %c \n", c, ft_toupper(c));
////	ft_strlcpy
//	char	src[] = "lorem ipsum";
//	char	dst[] = "sic amet";
//	size_t	size = 5;
//	size_t	len;
//
//	printf("src: %s \n", src);
//	printf("dst: %s \n", dst);
//	len = ft_strlcpy(dst, src, size);
//	printf("ft_strlcpy(dst, src, %d) = %d \n",(int) size,(int) len);
//	printf("new_dst: %s \n", dst);
////	ft_strlcat
//	char	dst[100] = "lorem ipsum ";
//	char	src[100] = "sic amet";
//	size_t	size = 40;
//	size_t	len_cat;
//
//	printf("src: %s\n", src);
//	printf("dst: %s\n", dst);
//	len_cat = ft_strlcat(dst, src, size);
//	printf("ft_strlcat(dst, src, %d) = %d \n",(int) size,(int) len_cat);
//	printf("new_dst: %s\n", dst);
	
	return (0);
}
