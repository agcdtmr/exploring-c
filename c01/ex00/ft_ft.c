/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/09 13:03:22 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/13 10:09:41 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("&nbr: %p\n", &nbr);
	printf("nbr: %p\n", nbr);
}

int	main(void)
{	
	int x;
	int* p_x;

	x = 10;
	p_x = &x;
	
	printf("x: %d\n", x);
	printf("&x: %p\n", &x);
	printf("pntr_x: %p\n", p_x);
	
	ft_ft(p_x);

	printf("x: %d\n", x);
	printf("&x: %p\n", &x);
	printf("pntr_x: %p\n", p_x);

	return (0);
}
