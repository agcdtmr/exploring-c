/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   permutation.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: klangenb <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/11 16:44:44 by klangenb      #+#    #+#                 */
/*   Updated: 2022/06/12 17:31:23 by cvan-vli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_col_unique(int *sq, int col, const int g_rows[24][4]);
int	check_col_down(int *sq, int col, int count, const int g_rows[24][4]);
int	check_col_up(int *sq, int col, int count, const int g_rows[24][4]);
int	check_row_right(int *sq, int row, int count, const int g_rows[24][4]);
int	check_row_left(int *sq, int row, int count, const int g_rows[24][4]);

// Our algorithm uses a lookup table of all permutations of {1,2,3,4}
// to reduce how many potential solutions it has to check
static const int	g_rows[24][4] = {
{1, 2, 3, 4},
{1, 2, 4, 3},
{1, 3, 2, 4},
{1, 3, 4, 2},
{1, 4, 2, 3},
{1, 4, 3, 2},
{2, 1, 3, 4},
{2, 1, 4, 3},
{2, 3, 1, 4},
{2, 3, 4, 1},
{2, 4, 1, 3},
{2, 4, 3, 1},
{3, 1, 2, 4},
{3, 1, 4, 2},
{3, 2, 1, 4},
{3, 2, 4, 1},
{3, 4, 1, 2},
{3, 4, 2, 1},
{4, 1, 2, 3},
{4, 1, 3, 2},
{4, 2, 1, 3},
{4, 2, 3, 1},
{4, 3, 1, 2},
{4, 3, 2, 1}
};

void	printsquare(int *square)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = g_rows[square[i]][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

// Check if the given square follows the given rules
// the rules must be stored in the same order as they are given
int	check_correct(int *sq, int rules[16])
{
	int	i;

	i = -1;
	while (++i < 4)
		if (!check_col_unique(sq, i, g_rows))
			return (0);
	i = -1;
	while (++i < 4)
	{
		if (!check_col_up(sq, i, rules[i], g_rows))
			return (0);
		if (!check_col_down(sq, i, rules[i + 4], g_rows))
			return (0);
		if (!check_row_left(sq, i, rules[i + 8], g_rows))
			return (0);
		if (!check_row_right(sq, i, rules[i + 12], g_rows))
			return (0);
	}
	return (1);
}

// Iterate through every possible combinaton of 4 rows, check if it matches
// the given rules, and print it if it does.
void	iter_perms(int *sq, int *rules)
{
	int	i;
	int	j;

	i = 0;
	while (sq[0] < 23 || sq[1] < 23 || sq[2] < 23 || sq[3] < 23)
	{
		if (sq[i] < 23)
		{
			sq[i]++;
			i = 0;
			if (check_correct(sq, rules))
			{
				printsquare(sq);
				return ;
			}
		}
		else
		{
			i++;
			j = -1;
			while (++j < i)
				sq[j] = 0;
		}
	}
	write(1, "Error\n", 6);
}
