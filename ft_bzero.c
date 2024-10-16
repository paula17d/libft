/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 00:51:59 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/16 22:36:47 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < num)
	{
		*str = 0;
		str++;
		i++;
	}
}

// int main() {
//     char buffer1[50];
//     char buffer2[50];

//     memset(buffer1, 'A', sizeof(buffer1) - 1);
//     buffer1[49] = '\0'; 

//     memset(buffer2, 'B', sizeof(buffer2) - 1);
//     buffer2[49] = '\0';

//     printf("Before ft_bzero:\n");
//     printf("buffer1: %s\n", buffer1);
//     printf("buffer2: %s\n", buffer2);

//     ft_bzero(buffer1, 10);
// }