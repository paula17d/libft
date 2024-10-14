/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:02:23 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 19:50:16 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			d[i] = s[i];
			i--;
		}
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() {
//     char src1[50] = "Hello, World!";
//     char dest1[50];

//     printf("Before memmove (non-overlapping):\n");
//     printf("src1: %s\n", src1);
//     memmove(dest1, src1, 13);
//     printf("After memmove (dest1): %s\n", dest1);
//     char str2[50] = "Overlapping Example";

//     printf("\nBefore memmove (overlapping):\n");
//     printf("str2: %s\n", str2);
//     memmove(str2 + 5, str2, 22); // Overlapping copy
//     printf("After memmove (str2): %s\n", str2);

//     printf("\nBefore memmove (zero length):\n");
//     printf("str2: %s\n", str2);
//     memmove(str2, str2, 0); // No change
//     printf("After memmove (str2): %s\n", str2);

//     printf("\nBefore memmove (same src and dest):\n");
//     printf("str2: %s\n", str2);
//     memmove(str2, str2, 15); // No change
//     printf("After memmove (str2): %s\n", str2);

//     return 0;
// }

// edit