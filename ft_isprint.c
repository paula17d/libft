/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:50:44 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:42:58 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int x);

int ft_isprint(int x)
{
    if (x >= 32 && x <= 126)
    {
        return 1;
    }
    return 0;
}

int main (void)
{
    char test1 = ' ';  // Should return 1 (true)
    char test2 = 'A';  // Should return 1 (true)
    char test3 = 's';  // Should return 1 (true)
    char test4 = 127;  // Should return 0 (false)
    char test5 = 10;  // Should return 0 (false)

    // Test ft_isdigit function
    printf("Test with '%c': %d\n", test1, ft_isprint(test1));  // Expect 1
    printf("Test with '%c': %d\n", test2, ft_isprint(test2));  // Expect 1
    printf("Test with '%c': %d\n", test3, ft_isprint(test3));  // Expect 1
    printf("Test with '%c': %d\n", test4, ft_isprint(test4));  // Expect 0
    printf("Test with '%c': %d\n", test5, ft_isprint(test5));  // Expect 0

    return 0;
}
