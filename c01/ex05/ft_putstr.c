/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 11:01:34 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/15 13:36:45 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	
}


/*void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		//ft_putchar(str[i]);
		ft_putchar(*(str + i));
		i++;
	}
	
}*/



int main(void)
{
	char str[8] = "Maganda";
	ft_putstr(str);
	return (0);
}
