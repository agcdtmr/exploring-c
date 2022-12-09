/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tpappaga <tpappaga@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 12:41:12 by tpappaga      #+#    #+#                 */
/*   Updated: 2022/06/04 13:32:51 by klangenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// print characters for each step (counter_x) 
//in the x direction (horizontally) 
static void	ft_print(int len, char begin_char, char mid_char, char end_char)
{
	int	counter_x;

	counter_x = 1;
	while (counter_x <= len)
	{
		if (counter_x == 1)
			ft_putchar(begin_char);
		else if (counter_x == len)
			ft_putchar(end_char);
		else
			ft_putchar(mid_char);
		counter_x++;
	}
	ft_putchar('\n');
}

// repeat the function above for each step (counter_y) 
//in the y direction (vertically)
void	rush(int x, int y)
{
	int	counter_y;

	counter_y = 1;
	if (x >= 1 && y >= 1)
	{
		while (counter_y <= y)
		{
			if (counter_y == 1)
				ft_print(x, 'o', '-', 'o');
			else if (counter_y == y)
				ft_print(x, 'o', '-', 'o');
			else
				ft_print(x, '|', ' ', '|');
			counter_y++;
		}
	}
}
