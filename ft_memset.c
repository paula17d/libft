/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:30:40 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 19:50:19 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < num)
	{
		*str = (unsigned char) value;
		str++;
		i++;
	}
	return (ptr);
}

// int main() {
//     unsigned char buffer[10];
//     memset(buffer, 5, sizeof(buffer));
//     printf("Contents of buffer after custom memset:\n");
//     for (size_t i = 0; i < sizeof(buffer); i++) {
//         printf("%d ", buffer[i]);
//     }
//     printf("\n");
//     unsigned char standardBuffer[10];
//     memset(standardBuffer, 0, sizeof(standardBuffer));
//     memset(standardBuffer, 5, sizeof(standardBuffer));
//     printf("Contents of standard buffer after standard memset:\n");
//     for (size_t i = 0; i < sizeof(standardBuffer); i++) {
//         printf("%d ", standardBuffer[i]);
//     }
//     printf("\n");
//     return 0;
// }