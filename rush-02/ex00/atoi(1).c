/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:35:45 by jde-haan          #+#    #+#             */
/*   Updated: 2022/06/21 10:59:08 by ancallej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	pos_neg;
	int	count;

	result = 0;
	pos_neg = 1;
	count = 0;
	if (str[0] == '-')
	{
		pos_neg = -1;
		++count;
	}
	while (str[count] != '\0')
	{
		result =  + str[count] - '0';
		count++;
	}
	return (pos_neg * result);
}

int main()
{
	char	str[100] = "823";
	int	value;

	value = ft_atoi(str);
	printf("%d", value);
}