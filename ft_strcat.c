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

char	*ft_strcat(char *dest, char *src)
{
	while(*dest != '\0')
	{
		*dest++;
	}
	while(*src != '\0')
	{
		char a = *src;
		*dest = a;
		*src++;
		*dest++;
	}
	return(dest);
}	

int	main(void)
{
	char stra[40] = "This is a string";
	char strb[] = " that likes cheese";
	char* pstra = stra;
	char* pstrb = strb;
	ft_strcat(pstra, pstrb);
	int i = 0;
	while(i<40)
	{
	printf("%c",stra[i]);
	i++;
	}
	return (0);
}
