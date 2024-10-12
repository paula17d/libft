/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:20:48 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:43:05 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main (void)
{
    char *str = "Hello, World!";
    printf("length: %d\n", ft_strlen(str));
    return 0;
}