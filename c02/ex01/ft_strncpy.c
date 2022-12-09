/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:51:07 by ancallej          #+#    #+#             */
/*   Updated: 2022/06/20 15:02:32 by ancallej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *bucket = dest;
    while (src && n--)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return bucket;
}

int main(void)
{
    char src[] = "kaya mo yan!";
    char dest[20];

    ft_strncpy(dest, src, 4);
    printf("%s\n", src);
    printf("%s\n", dest);
}