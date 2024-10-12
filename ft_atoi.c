/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:18:30 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:42:34 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str);

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1; // if number is positive or negative
    int result = 0; // to store the final integer

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
        i++;  // loop to skip over any empty spaces in the string and move up

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0'); // ?
            i++;  
    }
    
    return result * sign; 
}

(only 25 lines) EDIT





int main()
{
    char str1[] = "   -1234";
    char str2[] = "42";
    
    printf("%d\n", ft_atoi(str1));  // Output: -1234
    printf("%d\n", ft_atoi(str2));  // Output: 42

    return 0;
}