/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 15:34:29 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/14 16:56:15 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

	printf("div: %d\n", *div);
	printf("mod: %d", *mod);
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 5;

	ft_div_mod(a, b, &div, &mod);

	//printf("div: %d\n", div);
	//printf("mod: %d", mod);
}
