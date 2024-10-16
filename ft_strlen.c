/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:20:48 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/16 10:34:28 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main(void)
// {
//     const char *str1 = "Hello, World!";
//     printf("Length of '%s': %zu\n", str1, ft_strlen(str1));

//     const char *str2 = "";
//     printf("Length of empty string: %zu\n", ft_strlen(str2));

//     const char *str3 = "This is a test string.";
//     printf("Length of '%s': %zu\n", str3, ft_strlen(str3));

//     const char *str4 = "1234567890!@#$%^&*()";
//     printf("Length of '%s': %zu\n", str4, ft_strlen(str4));

//     return 0;
// }