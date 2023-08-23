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

char	ft_str_is_alpha(char *str)
{
	while(*str != '\0')
	{
		if(*str <'A' || *str > 'z' || *str < 'a' && *str > 'Z')
		{
		return (0);
		}
	*str++;
	}
	return(1);	
}
  
int	main(void)
{	
	char str[] =  {'g','h','i','j'};
	char* pstr = str;
	ft_str_is_alpha(pstr);
}
