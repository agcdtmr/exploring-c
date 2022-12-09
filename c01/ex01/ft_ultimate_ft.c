/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_ft.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/13 13:15:34 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/13 15:07:37 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int x;
	int *pt1;
	int **pt2;
	int ***pt3;
	int ****pt4;
	int *****pt5;
	int ******pt6;
	int *******pt7;
	int ********pt8;
	int *********pt9;

	x = 10;
	pt1 = &x;
	pt2 = &pt1;
	pt3 = &pt2;
	pt4 = &pt3;
	pt5 = &pt4;
	pt6 = &pt5;
	pt7 = &pt6;
	pt8 = &pt7;
	pt9 = &pt8;
	ft_ultimate_ft(&pt9);
	printf("Value of x: %d", x); 

	return (0);
}
