/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/16 15:37:37 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/16 19:21:07 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int n;
	
	i = 0;
	n = size - 1;
	while(i < n)
	{
		temp = tab[i];
		tab[i] =tab[n];
		tab[n] = temp;

		i++;
		n--;
	}
	//printf("%d %d %d %d %d", tab[0], tab[1], tab [2], tab [3], tab [4]);
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(tab, size);
	
	int i;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
