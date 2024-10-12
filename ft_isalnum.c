/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:02:22 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:42:38 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int x);

int ft_isalnum(int x)
{
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= 48 && x <= 57))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char test1 = 'A';  // Should return 1 (true)
    char test2 = 'z';  // Should return 1 (true)
    char test3 = '1';  // Should return 1 (true)
    char test4 = '#';  // Should return 0 (false)
    char test5 = '*';  // Should return 0 (false)

    // Test ft_isalnum function
    printf("Test with '%c': %d\n", test1, ft_isalnum(test1));  // Expect 1
    printf("Test with '%c': %d\n", test2, ft_isalnum(test2));  // Expect 1
    printf("Test with '%c': %d\n", test3, ft_isalnum(test3));  // Expect 1
    printf("Test with '%c': %d\n", test4, ft_isalnum(test4));  // Expect 0
    printf("Test with '%c': %d\n", test5, ft_isalnum(test5));  // Expect 0

    return 0;
}
