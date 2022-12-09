/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: klangenb <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 10:40:57 by klangenb      #+#    #+#                 */
/*   Updated: 2022/06/12 13:53:53 by klangenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Check if the left view at 'row' can see 'count' buildings
int	check_row_left(int *sq, int row, int count, const int g_rows[24][4])
{
	int	counter;
	int	tallest;
	int	i;

	i = 0;
	tallest = 0;
	counter = 0;
	while (i < 4)
	{
		if (tallest < g_rows[sq[row]][i])
		{
			counter++;
			tallest = g_rows[sq[row]][i];
		}
		i++;
	}
	return (counter == count);
}

// Check if the right view at 'row' can see 'count' buildings
int	check_row_right(int *sq, int row, int count, const int g_rows[24][4])
{
	int	counter;
	int	tallest;
	int	i;

	tallest = 0;
	counter = 0;
	i = 3;
	while (i >= 0)
	{
		if (tallest < g_rows[sq[row]][i])
		{
			counter++;
			tallest = g_rows[sq[row]][i];
		}
		i--;
	}
	return (counter == count);
}

// Check if the top view at 'col' can see 'count' buildings
int	check_col_up(int *sq, int col, int count, const int g_rows[24][4])
{
	int	counter;
	int	tallest;
	int	i;

	tallest = 0;
	counter = 0;
	i = 0;
	while (i < 4)
	{
		if (tallest < g_rows[sq[i]][col])
		{
			counter++;
			tallest = g_rows[sq[i]][col];
		}
		i++;
	}
	return (counter == count);
}

// Check if the bottom view at 'col' can see 'count' buildings
int	check_col_down(int *sq, int col, int count, const int g_rows[24][4])
{
	int	counter;
	int	tallest;
	int	i;

	tallest = 0;
	counter = 0;
	i = 3;
	while (i >= 0)
	{
		if (tallest < g_rows[sq[i]][col])
		{
			counter++;
			tallest = g_rows[sq[i]][col];
		}
		i--;
	}
	return (counter == count);
}

// Check that every digit in column 'col' is unique
// Because of the lookup table, we don't need a similar function for the rows
int	check_col_unique(int *sq, int col, const int g_rows[24][4])
{
	int	seen[5];
	int	i;
	int	current;

	i = -1;
	while (++i < 5)
		seen[i] = 0;
	i = 0;
	while (i < 4)
	{
		current = g_rows[sq[i]][col];
		if (seen[current])
			return (0);
		seen[current] = 1;
		i++;
	}
	return (1);
}
