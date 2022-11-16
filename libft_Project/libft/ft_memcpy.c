/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoares- <lsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:49:41 by lsoares-          #+#    #+#             */
/*   Updated: 2022/11/16 18:42:40 by lsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = dest;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
		ptr[i++] = *(unsigned char *)src++;
	return (ptr);
}

int main (void)
{
	char *strNull = NULL;
	char str = "Isso eh um teste!";
	int arr[5] = {1, 2, 3, 4, 5};
	float arrFlt[5] = {1.0, 1.1, 1.2, 1.3, 1.4};
	
	char tmpStr[100];
	int tmpArrInt[5];
	float tmpArrFlt[5];

	printf("%s\n", str);
	int i = 0;
	while(i < 5)
		printf("%d ", arr[i++]);
	putchar('\n');
	i = 0;
	while(i < 5)
		printf("%f ", arrFlt[i++]);
	putchar('\n');

	//with a NULL adress
	//with n = 0
	//with the same adress as src and dest
	//when src is smaller them dest and n overlaps dest
	
	
	printf("tmpNull: %s | tmpStr: %s tmpStr&: %p | ", strNull, tmpStr, tmpStr
	)
		
}


