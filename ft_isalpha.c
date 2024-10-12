/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:41:47 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:42:47 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int x);

int ft_isalpha(int x)
{
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char test1 = 'A';  // Should return 1 (true)
    char test2 = 'z';  // Should return 1 (true)
    char test3 = '1';  // Should return 0 (false)
    char test4 = '#';  // Should return 0 (false)
    char test5 = 'm';  // Should return 1 (true)

    // Test ft_isalpha function
    printf("Test with '%c': %d\n", test1, ft_isalpha(test1));  // Expect 1
    printf("Test with '%c': %d\n", test2, ft_isalpha(test2));  // Expect 1
    printf("Test with '%c': %d\n", test3, ft_isalpha(test3));  // Expect 0
    printf("Test with '%c': %d\n", test4, ft_isalpha(test4));  // Expect 0
    printf("Test with '%c': %d\n", test5, ft_isalpha(test5));  // Expect 1

    return 0;
}
