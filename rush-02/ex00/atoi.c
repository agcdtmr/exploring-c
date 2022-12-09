/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   atoi.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-haan <jde-haan@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/19 18:35:45 by jde-haan      #+#    #+#                 */
/*   Updated: 2022/06/19 19:16:05 by jde-haan      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
		result = result * 10 + str[count] - '0';
		count++;
	}
	return (pos_neg * result);
}

// int main()
// {
// 	char	str[];
// 	int	value;

// 	str = "vdegpjerpjvopjvfv";
// 	value = ft_atoi(str);
// }