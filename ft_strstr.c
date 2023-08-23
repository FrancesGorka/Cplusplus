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

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	while(*str != '\0') 
	{
		while(*str != *to_find && *str != '\0') 
		{
			*str++;
		}
		while(*str == *to_find)
		{
			if(*(to_find + 1) == '\0') 
			{
				return(str);
			}
		*str++;
		*to_find++;
		j++; 
		}
		if(j != 0)
		{
			while(i<j)
			{
				*to_find--;
				i++;
			}
		j = 0;
		}
	}
	return(NULL);
}	

int	main(void)
{
	char stra[] = "a pear";
	char strb[] = "is a";
	char* pstra = stra;
	char* pstrb = strb;
	ft_strstr(pstra, pstrb);
	return (0);
}

