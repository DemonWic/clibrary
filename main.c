/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:38:00 by ahintz            #+#    #+#             */
/*   Updated: 2018/11/25 16:11:26 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memccpy.c"
#include "ft_memmove.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_strcpy.c"
#include "ft_strncpy.c"
#include "ft_strcat.c"
#include "ft_strncat.c"
#include "ft_strlcat.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strstr.c"
#include "ft_strnstr.c"
#include "ft_strcmp.c"
#include "ft_strncmp.c"
#include "ft_atoi.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"


void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);


int		main()
{
	char s1[]="Hello";
	char *s3;
	char *s4;
	char s2[]="Hello";
	s3 = memset(s1, '1', 5);
	s4 = ft_memset(s2, '1', 5);
	printf("%s\n", "MEMSET");
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s4);

	printf("%s\n", "BZERO");
	char s5[]= "hello";
	char s6[]= "hello";
	bzero(s5, 3);
	ft_bzero(s6, 3);
	printf("%s\n", s5);
	printf("%s\n", s6);
	int i = 0;
	while(i <= 6)
	{
		if (s5[i] == s6[i])
			printf("%i\n", 1);
		i++;
	}

	printf("%s\n", "MEMCPY");

	char s7[]="Hello";
	char s8[]="ADF";
	char *s9;
	char *s10;
	char s11[]="Hello";
	char s12[]="ADF";
	s9 = memcpy(s7, s8, 3);
	s10 = ft_memcpy(s11, s12, 3);

	printf("%s\n", s7);
	printf("%s\n", s9);
	printf("%s\n", s11);
	printf("%s\n", s10);

	printf("%s\n", "MEMCCPY");
	char s13[]="Hello";
	char s14[]="ADZ";
	char s17[]="Hello";
	char s18[]="ADZ";
	char *s15;
	char *s16;

	s15 = memccpy(s13, s14, 69, 3);
	s16 = ft_memccpy(s17, s18, 69, 3);
	printf("%s\n", s13);
	printf("%s\n", s15);
	printf("%s\n", s17);
	printf("%s\n", s16);


	printf("%s\n", "MEMMOVE");
	char s01[]="1234567890";
	char s19[]="1234567890";
	char *r1;
	char *r2;

	printf("%s\n",s01);
	printf("%s\n",s19);
	r1 = memmove(&s01[4], &s01[3], 3);
	r2 = ft_memmove(&s19[4], &s19[3], 3);
	printf("%s\n",s01);
	printf("%s\n",s19);
	printf("%s\n",r1);
	printf("%s\n",r2);


	printf("%s\n", "MEMCHR");
	char s20[] = "Hello";
	char s21[] = "Hello";
	char *s22;
	char *s23;

	s22 = memchr(s20, 'l', 3);
	s23 = ft_memchr(s21, 'l', 3);

	printf("%s\n", s22);
	printf("%s\n", s23);

	printf("%s\n", "MEMCMP");
	char s24[] = "abcde0f00";
	char s25[] = "abcde0f00";

	int p1;
	int p2;
	p1 = memcmp(s24, s25, 20);
	p2 = ft_memcmp(s24, s25, 20);

	printf("%i\n",p1);
	printf("%i\n",p2);


	printf("%s\n", "STRLEN");
	char s26[]="Hello World";
	int k1,k2;
	k1 = strlen(s26);
	k2 = ft_strlen(s26);
	printf("%i\n", k1);
	printf("%i\n", k2);
	
	printf("%s\n", "STRDUP");
	char s27[]="Hello";
	char s28[]="Hello";
	char *s29;
	char *s30;

	s29 = strdup(s27);
	s30 = ft_strdup(s28);
	s27[2] = 'A';
	s28[2] = 'A';
	printf("%s\n", s27);
	printf("%s\n", s29);
	printf("%s\n", s28);
	printf("%s\n", s30);
	
	printf("%s\n", "STRCPY");
	char s31[] = "Hello";
	char s32[] = "ARP";
	char s33[] = "Hello";
	char s34[] = "ARP";
	char *s35;
	char *s36;
	s35 = strcpy(s31, s32);
	s36 = ft_strcpy(s33, s34);
	printf("%s\n", s35);
	printf("%s\n", s36);
	
	printf("%s\n", "STRNCPY");
	char s37[] = "Hello";
	char s38[] = "Hepp";
	char s39[] = "Hello";
	char s40[] = "Hepp";
	char *s41;
	char *s42;
	
	s41 = strncpy(s37, s38, 5);
	s42 = ft_strncpy(s39, s40, 5);
	printf("%s\n", s41);
	printf("%s\n", s42);

	printf("%s\n", "STRCAT");
	/*	ft_strcpy(s1 + ft_strlen(s1), s2);*/
	char s43[30] = "World";
	char s44[] = " HELLO";
	char s45[30] = "World";
	char s46[] = " HELLO";
	char *s47;
	char *s48;
	s47 = strcat(s43, s44);
	s48 = ft_strcat(s45, s46);
	printf("%s\n", s47);
	printf("%s\n", s48);	
	
	printf("%s\n", "STRNCAT");
	char m1[30] = "Hello";
	char m2[] = " World MMM";
	char m3[30] = "Hello";
	char m4[] = " World MMM";
	char *m5;
	char *m6;

	m5 = strncat(m1, m2, 5);
	m6 = ft_strncat(m3, m4, 5);
	printf("%s\n", m5);
	printf("%s\n", m6);
	
	printf("%s\n", "STRLCAT");
/*
	char *d;
	const char *s;
	size_t n;
	size_t dlen;

	d = dst;
	s = src;
	n = size;
	while (n != 0 && *d)
	{
		d++;
		n--;
	}
	dlen = d - dst;
	n = size - dlen;

	if (n == 0)
		return (dlen + strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}*/
	char m7[100]="Pudge is missing. ";
	char m8[]="Hello";
	char m9[100]="Pudge is missing. ";
	char m10[]="Hello";
	size_t p01;
	size_t p02;
	p01 = strlcat(m7, m8, 70);
	p02 = ft_strlcat(m9, m10, 70);
	printf("%s\n",m7);
	printf("%s\n",m9);
	printf("%zu\n",p01);
	printf("%zu\n",p02);
	if (p01 == p02)
		printf("OK\n");
		
	printf("%s\n", "STRCHR");
	char s49[]="0123456789";
	char s50[]="0123456789";
	char *s51;
	char *s52;
	char *s53;
	char *s54;
	s51 = strchr(s49, 0);
	s52 = ft_strchr(s50, 0);
	s53 = strchr(s49, '3');
	s54 = ft_strchr(s50, '3');
	printf("%s\n", s51);
	printf("%s\n", s52);
	printf("%s\n", s53);
	printf("%s\n", s54);
	
	printf("%s\n", "STRRCHR");
	char s55[]="0123453789";
	char s56[]="0123453789";
	char *s57;
	char *s58;
	char *s59;
	char *s60;
	s57 = strrchr(s55, '3');
	s58 = ft_strrchr(s56, '3');
	s59 = strrchr(s55, 0);
	s60 = ft_strrchr(s56, 0);
	printf("%s\n", s57);
	printf("%s\n", s58);
	printf("%s\n", s59);
	printf("%s\n", s60);
	
	printf("%s\n", "STRSTR");
	char s61[] = "Hello wwwworld man";
	char s62[] = "wwworld";
	char *s63;
	char *s64;
	s63 = strstr(s61, s62);
	s64 = ft_strstr(s61, s62);
	printf("%s\n", s63);
	printf("%s\n", s64);
	
	printf("%s\n", "STRNSTR");
	char s65[] = "Hello wwwworld man";
	char s66[] = "wwworld";
	char *s67;
	char *s68;
	s67 = strnstr(s65, s66, 13);
	s68 = ft_strnstr(s65, s66, 13);
	printf("%s\n", s67);
	printf("%s\n", s68);
	
	printf("%s\n", "STRCMP");
	char s69[] = "Hello ";
	char s70[] = "Hello+";
	int s71;
	int s72;
	s71 = strcmp(s69, s70);
	s72 = ft_strcmp(s69, s70);
	printf("%i\n", s71);
	printf("%i\n", s72);
	
	printf("%s\n", "STRNCMP");
	s71 = strncmp(s69, s70, 5);
	s72 = ft_strncmp(s69, s70, 5);
	printf("%i\n", s71);
	printf("%i\n", s72);
	
	printf("%s\n", "ATOI");
	char s73[] = "      +12345fdfh";
	int s74;
	int s75;
	s74 = atoi(s73);
	s75 = ft_atoi(s73);
	printf("%i\n", s74);
	printf("%i\n", s75);
	
	printf("%s\n", "ISALPHA");
	char s76 = 'A';
	char s77 = 'a';
	char s78 = 'P';
	char s79 = 'Z';
	char s80 = '0';
	char s81 = '9';
	int p;
	p = isalpha(s76);
	printf("%i\n", p);
	p = ft_isalpha(s76);
	printf("%i\n", p);
	p = isalpha(s77);
	printf("%i\n", p);
	p = ft_isalpha(s77);
	printf("%i\n", p);
	p = isalpha(s78);
	printf("%i\n", p);
	p = ft_isalpha(s78);
	printf("%i\n", p);
	p = isalpha(s79);
	printf("%i\n", p);
	p = ft_isalpha(s79);
	printf("%i\n", p);
	p = isalpha(s80);
	printf("%i\n", p);
	p = ft_isalpha(s80);
	printf("%i\n", p);
	p = isalpha(s81);
	printf("%i\n", p);
	p = ft_isalpha(s81);
	printf("%i\n", p);
	
	printf("%s\n", "ISDIGIT");
	char s82 = 'A';
	char s83 = 'a';
	char s84 = '8';
	char s85 = 'Z';
	char s86 = '0';
	char s87 = '9';
	int pp;
	pp = isdigit(s82);
	printf("%i\n", pp);
	pp = ft_isdigit(s82);
	printf("%i\n", pp);
	pp = isdigit(s83);
	printf("%i\n", pp);
	pp = ft_isdigit(s83);
	printf("%i\n", pp);
	pp = isdigit(s84);
	printf("%i\n", pp);
	pp = ft_isdigit(s84);
	printf("%i\n", pp);
	pp = isdigit(s85);
	printf("%i\n", pp);
	pp = ft_isdigit(s85);
	printf("%i\n", pp);
	pp = isdigit(s86);
	printf("%i\n", pp);
	pp = ft_isdigit(s86);
	printf("%i\n", pp);
	pp = isdigit(s87);
	printf("%i\n", pp);
	pp = ft_isdigit(s87);
	printf("%i\n", pp);
	
	printf("%s\n", "ISALNUM");
	char s88 = ' ';
	char s89 = 'a';
	char s90 = '8';
	char s91 = 'Z';
	char s92 = 30;
	char s93 = 123;
	int pp2;
	pp2 = isalnum(s88);
	printf("%i\n", pp2);
	pp2 = ft_isalnum(s88);
	printf("%i\n", pp2);
	pp2 = isalnum(s89);
	printf("%i\n", pp2);
	pp2 = ft_isalnum(s89);
	printf("%i\n", pp2);
	pp2 = isalnum(s90);
	printf("%i\n", pp2);
	pp2 = ft_isalnum(s90);
	printf("%i\n", pp2);
	pp2 = isalnum(s91);
	printf("%i\n", pp2);
	pp2 = ft_isalnum(s91);
	printf("%i\n", pp2);
	pp2 = isalnum(s92);
	printf("%i\n", pp2);
	pp2 = ft_isalnum(s92);
	printf("%i\n", pp2);
	pp2 = isalnum(s93);
	printf("%i\n", pp2);
	pp2 = ft_isalnum(s93);
	printf("%i\n", pp2);
	
	printf("%s\n", "ISASCII");
	char s94 = ' ';
	char s95 = 'a';
	char s96 = '8';
	char s97 = 'Z';
	char s98 = 0;
	char s99 = -10;
	int pp3;
	pp3 = isascii(s94);
	printf("%i\n", pp3);
	pp3 = ft_isascii(s94);
	printf("%i\n", pp3);
	pp3 = isascii(s95);
	printf("%i\n", pp3);
	pp3 = ft_isascii(s95);
	printf("%i\n", pp3);
	pp3 = isascii(s96);
	printf("%i\n", pp3);
	pp3 = ft_isascii(s96);
	printf("%i\n", pp3);
	pp3 = isascii(s97);
	printf("%i\n", pp3);
	pp3 = ft_isascii(s97);
	printf("%i\n", pp3);
	pp3 = isascii(s98);
	printf("%i\n", pp3);
	pp3 = ft_isascii(s98);
	printf("%i\n", pp3);
	pp3 = isascii(s99);
	printf("%i\n", pp3);
	pp3 = ft_isascii(s99);
	printf("%i\n", pp3);


	return (0);
}

