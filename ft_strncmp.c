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

int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	while(*s1 != '\0' && *s2 != '\0' && j < n)
	{
		if(*s1 < *s2)
		{
			i--;
		}
		if(*s1 > *s2)
		{
			i++;
		}
	*s1++;
	*s2++;
	j++;
	}
	if(*s1<*s2 && j < n)
	{
		while(*s2 != '\0')
		{
			i--;
			*s2++;
		}
	}
	if(*s1>*s2 && j < n)
	{
		while(*s1 != '\0')
		{
			i++;
			*s1++;
		}
	}	
	printf("%d",i);
	return(i);
}	

int	main(void)
{
	int n = 15;
	char stra[] = "This is a string";
	char strb[] = "This is a different string";
	char* pstra = stra;
	char* pstrb = strb;
	ft_strcmp(pstra, pstrb, n);
	return (0);
}
