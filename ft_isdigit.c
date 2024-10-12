/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:37:07 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:42:55 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int x);

int ft_isdigit(int x)
{
    if (x >= 48 && x <= 57)
    {
        return 1;
    }
    return 0;
}

int main (void)
{
    char test1 = '0';  // Should return 1 (true)
    char test2 = '9';  // Should return 1 (true)
    char test3 = '4';  // Should return 1 (true)
    char test4 = '#';  // Should return 0 (false)
    char test5 = 'A';  // Should return 0 (false)

    // Test ft_isdigit function
    printf("Test with '%c': %d\n", test1, ft_isdigit(test1));  // Expect 1
    printf("Test with '%c': %d\n", test2, ft_isdigit(test2));  // Expect 1
    printf("Test with '%c': %d\n", test3, ft_isdigit(test3));  // Expect 0
    printf("Test with '%c': %d\n", test4, ft_isdigit(test4));  // Expect 0
    printf("Test with '%c': %d\n", test5, ft_isdigit(test5));  // Expect 0

    return 0;
}
