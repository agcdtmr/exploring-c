/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:04:10 by ancallej          #+#    #+#             */
/*   Updated: 2022/06/21 09:41:18 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	content_a;
	int	content_b;

	content_a = *a;
	content_b = *b;
	*a = content_a / content_b;
	*b = content_a % content_b;
}
