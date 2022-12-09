/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancallej <ancallej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:01:37 by ancallej          #+#    #+#             */
/*   Updated: 2022/06/20 14:33:45 by ancallej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>


char    *ft_strcpy(char *dest, char *src)
{
    char *bucket = dest;
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    return bucket;
    //printf("%s\n", bucket);

}
int main(void)
{
    char src_str[] = "kaya yan!";
    char dest_str[30];

    ft_strcpy(dest_str, src_str);
    printf("%s", dest_str);
}