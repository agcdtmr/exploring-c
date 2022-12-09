/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:38:14 by ancallej          #+#    #+#             */
/*   Updated: 2022/06/21 18:18:39 by ancallej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	str_countr;

	str_countr = 0;
	while (str[str_countr] != '\0')
	{
		str_countr++;
	}
	return (str_countr);
}