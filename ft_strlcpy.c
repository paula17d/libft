/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:43:55 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 19:50:25 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (dstsize == 0)
	{
		return (src_length);
	}
	while (src[i] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}
// int main()
// {
// 	const char src[] = "Hello, World!";
// 	char dest[6];  

// 	size_t result = ft_strlcpy(dest, src, sizeof(dest));

// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dest);  
// 	printf("Length of source string: %zu\n", result);

// 	return 0;
// }