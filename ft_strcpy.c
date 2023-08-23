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

char	*ft_strcpy(char *dest, char *src)
{
	while(*dest != '\0')
	{
		if(*src != '\0')
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
	}
}

int	main(void)
{
	int i = 0;
	char str[] = "string";
	char* pstr  = str;
	char dest[] = "abcdefghijklmnopqrstuvw";
	char* pdest = dest;
	ft_strcpy(pdest, pstr);
	while(dest[i] != '\0')
	{
		printf("%c",*pdest);
		*pdest++;
		i++;
	}
	return (0);
}
