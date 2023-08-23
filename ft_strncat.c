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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	while(*dest != '\0')
	{
		*dest++;
	}
	while(*src != '\0' && i < nb)
	{
		char a = *src;
		*dest = a;
		*src++;
		*dest++;
		i++;
	}
	return(dest);
}	

int	main(void)
{
	int nb = 5;
	char stra[40] = "This is a string";
	char strb[] = " that likes cheese";
	char* pstra = stra;
	char* pstrb = strb;
	ft_strncat(pstra, pstrb, nb);
	int i = 0;
	while(i<40)
	{
	printf("%c",stra[i]);
	i++;
	}
	return (0);
}
