/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ancallej <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/04 15:09:51 by ancallej      #+#    #+#                 */
/*   Updated: 2022/06/04 15:09:57 by ancallej      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
void    ft_putchar(char c);

static void     ft_print(int length, char begin_char, char mid_char, char end_char)
{
        int     counter_x;

        counter_x = 1;
        while (counter_x <= length)
        {
                if (counter_x == 1)
                        ft_putchar(begin_char);
                else if (counter_x == length)
                        ft_putchar(end_char);
                else
                        ft_putchar(mid_char);
                counter_x++;
    }
    ft_putchar('\n');
}

void    rush(int x, int y)
{
        int     counter_y;

        counter_y = 1;
        if (x >=  1 && y >= 1)
        {
                    while (counter_y <= y)
                    {
                            if (counter_y == 1)
                                    ft_print(x, '/', '*', '\\');
                            else if (counter_y == y)
                                    ft_print(x, '\\', '*', '/');
                            else
                                    ft_print(x, '*', ' ', '*');
                            counter_y++;
            }
    }
}