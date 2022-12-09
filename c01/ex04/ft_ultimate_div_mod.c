/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 17:04:10 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/14 17:43:50 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int content_a;
	int content_b;

	content_a = *a;
	content_b = *b;

	*a = content_a / content_b;
	*b = content_a % content_b;
}

int main(void)
{
	int a;
	int b;

	a = 100;
	b = 9;

	ft_ultimate_div_mod(&a, &b);

	printf("pointer a: %d\n", a);
	printf("pointer b: %d", b);
}
