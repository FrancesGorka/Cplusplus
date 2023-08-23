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

void	ft_copy(char *a, char *b)
{
	char b1 = *b;
	*a = b1;
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while(*dest != '\0')
	{
		if(*src != '\0' && i < n)
		{
			ft_copy(dest, src);
		}
		else 
		{
		char b1 = '\0';
		*dest = b1;
		}
	*src++;
	*dest++;
	i++;
	}
}
  
int	main(void)
{
	int i = 0;
	int n = 8;
	char str[] = "string";
	char* pstr  = str;
	char dest[] = "abcdefghijklmnopqrstuvw";
	char* pdest = dest;
	ft_strncpy(pdest, pstr, n);
	while(dest[i] != '\0')
	{
		printf("%c",*pdest);
		*pdest++;
		i++;
	}
	return (0);
}
