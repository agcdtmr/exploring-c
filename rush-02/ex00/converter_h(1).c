/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   converter_h.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jde-haan <jde-haan@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/19 18:12:09 by jde-haan      #+#    #+#                 */
/*   Updated: 2022/06/19 19:16:33 by jde-haan      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_n(char num)
{
	if (num == '0')
		write (1, "zero\n", 5);
	else if (num == '1')
		write (1, "one\n", 5);
	else if (num == '2')
		write (1, "two\n", 5);
	else if (num == '3')
		write (1, "three\n", 5);
	else if (num == '4')
		write (1, "four\n", 5);
	else if (num == '5')
		write (1, "five\n", 5);
	else if (num == '6')
		write (1, "six\n", 5);
	else if (num == '7')
		write(1, "seven\n", 5);
	else if (num == '8')
		write(1, "eight\n", 5);
	else if (num == '9')
		write (1, "nine\n", 5);
}	

// int main()
// {
// 	print_n('9');
// }
