/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:31:16 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 19:50:04 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
//     char test1 = 'A';  // Should return 1 (true)
//     char test2 = 'z';  // Should return 1 (true)
//     int test3 = 128;  // Should return 0 (false)
//     int test4 = 241;  // Should return 0 (false)
//     char test5 = '4';  // Should return 1 (true)
//     printf("Test with '%c': %d\n", test1, ft_isascii(test1));  // Expect 1
//     printf("Test with '%c': %d\n", test2, ft_isascii(test2));  // Expect 1
//     printf("Test with '%c': %d\n", test3, ft_isascii(test3));  // Expect 0
//     printf("Test with '%c': %d\n", test4, ft_isascii(test4));  // Expect 0
//     printf("Test with '%c': %d\n", test5, ft_isascii(test5));  // Expect 1
//     return 0;
// }
