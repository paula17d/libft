/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:42:38 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/12 14:43:08 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int x);

int ft_tolower(int x)
{
    if (x >= 'A' && x <= 'Z')
    {
        return (x + 32);
    }
    return x;
}

int main ()
{
    char x;
    x = 'B';

    printf("%c\n", ft_tolower(x));
}
