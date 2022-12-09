/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/14 14:30:38 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/14 15:28:06 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int content_a;

	content_a = *a;
	*a = *b;
	*b = content_a;

	printf("Content of content_a: %d\n", content_a);
	printf("Content of a: %d\n", *a);
	printf("Content of b: %d\n", *b);
}

int main(void)
{
	int	a = 5;
	int b = 9;
	ft_swap(&a, &b);

	return (0);
}
