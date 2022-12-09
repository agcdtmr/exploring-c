/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:01:37 by ancallej          #+#    #+#             */
/*   Updated: 2022/06/23 08:29:50 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main(void)
// {
//     char src_str[] = "kaya yan!";
//     char dest_str[30] = "asdfghjkdfghjfgh";

//     ft_strcpy(dest_str, src_str);
// 	printf("%s\n", src_str);
//     printf("%s", dest_str);  //printf("%s\n", dest);
// }
