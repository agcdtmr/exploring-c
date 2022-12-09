/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   converter.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-haan <jde-haan@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/18 12:56:44 by jde-haan      #+#    #+#                 */
/*   Updated: 2022/06/19 19:22:20 by jde-haan      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	converter(char *num)
{
	char	*single_w[10];
	char	*single_d[10];
	int		length;
	int		count;

	*single_w = {"zero", "one", "two", "three", "four", "five"};
	*single_d[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	length = ft_strlen(*num);
	count = 0;
	if (length == 1)
	{
		while (*single_d[count] != *num)
		{
				++count;
			write(1, &single_w[count], 1);
		}
	}
	return (0);
}

// int	main()
// {
// 	char	a;

// 	a = "4";
// 	converter(a);
// }

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		++count;
	}
	return (count);
}
