/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:12:13 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 19:50:14 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() {
//     char source[] = "Hello, World!";
//     char destination[50];
//     size_t length = 14;  
//     memcpy(destination, source, length);
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);
//     return 0;
// }
// copies data from one place (source) to another (destination) in memory
