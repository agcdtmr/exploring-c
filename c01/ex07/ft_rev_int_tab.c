/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:37:37 by ancallej          #+#    #+#             */
/*   Updated: 2022/06/21 09:47:42 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	n;

	i = 0;
	n = size - 1;
	while (i < n)
	{
		temp = tab[i];
		tab[i] = tab[n];
		tab[n] = temp;
		i++;
		n--;
	}
}
