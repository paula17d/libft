/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:42:34 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:43:11 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int x);

int ft_toupper(int x)
{
    if (x >= 'a' && x <= 'z')
    {
        return (x - 32);
    }
    return x;
}

int main ()
{
    char x;
    x = 'b';

    printf("%c\n", ft_toupper(x));
}
