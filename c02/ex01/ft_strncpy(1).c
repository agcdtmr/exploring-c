/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:51:07 by ancallej          #+#    #+#             */
/*   Updated: 2022/06/23 13:44:02 by ancallej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
// int main()
// {
//     // char src[] = "kaya mo yan!";
//     char dest[20];

//     ft_strncpy(dest, "kaya", 20);
//     printf("%s\n", ft_strncpy(dest, "kaya", 20));
// 	// printf("%s\n", strncpy(dest, "kaya", 7));
// 	return (0);
// }