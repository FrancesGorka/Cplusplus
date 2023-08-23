/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgorka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:34:26 by fgorka            #+#    #+#             */
/*   Updated: 2023/03/02 15:34:52 by fgorka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
	i++;
	*str++;
	}
	return i;
}

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i = 0;
	while(*dest != '\0') 
	{
		*dest++;
	}
	while(*src != '\0' && i < size - 1) 
	{
		char a = *src;
		*dest = a;
		*src++;
		*dest++;
		i++;
	}
	unsigned int k = ft_strlen(dest) + ft_strlen(src);
	unsigned int* pk = &k;
	return(pk);
}	

int	main(void)
{
	int nb = 19;
	char stra[40] = "This is a string";
	char strb[] = " that likes cheese";
	char* pstra = stra;
	char* pstrb = strb;
	ft_strlcat(pstra, pstrb, nb);
	int i = 0;
	while(i<40)
	{
	printf("%c",stra[i]);
	i++;
	}
	return (0);
}
