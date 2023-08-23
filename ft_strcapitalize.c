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

char	*ft_strcapitalize(char *str)
{
	int b = *str;
	*str = b - 32;
	*str++;
	while(*str != '\0')
	{
		if(*str == 32)
		{
		//printf("Here's a space");
		*str++;
		int c = *str;
		*str = c - 32;
		}
		else if (*str <= 'Z' && *str >= 'A')
		{
		int c = *str;
		*str = c + 32;
		}
	*str++;
	} 
	return(str);	
}
  
int	main(void)
{	
	int i = 0;
	char str[] =  "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char* pstr = str;
	ft_strcapitalize(pstr);
	write(1,str,61);
}
