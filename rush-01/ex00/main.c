/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 15:42:03 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/12 17:51:04 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	iter_perms(int *sq, int *rules);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	parse_string(char *string, int input[16])
{	
	char	c;
	int		x;

	x = 0;
	while (x < 31)
	{
		c = string[x];
		if (x % 2 == 0)
		{
			if (c >= '1' && c <= '4')
			{
				input[x / 2] = c - 48;
			}
			else
			{
				return (0);
			}
		}
		else
			if (c != ' ')
				return (0);
		x++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	input[16];
	int	square[4];

	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 31)
		{
			if (parse_string(argv[1], input))
			{
				square[0] = 0;
				square[1] = 0;
				square[2] = 0;
				square[3] = 0;
				iter_perms(square, input);
				return (0);
			}
		}	
	}
	write(1, "Error\n", 6);
}
