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

char	*ft_strlowcase(char *str)
{
	while(*str != '\0')
	{
		if(*str <='Z' && *str >= 'A')
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
	char str[] =  {'G','H','I','J'};
	char* pstr = str;
	ft_strlowcase(pstr);
	while(i<4)
	{
	printf("%c",str[i]);
	i++;
	}
}
