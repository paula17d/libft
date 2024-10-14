/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:37:11 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 19:50:22 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = 0;
	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
	{
		dst_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (dst_len >= dstsize)
	{
		return (dstsize + src_len);
	}
	while (src[i] != '\0' && (dst_len + i) < (dstsize -1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (dst_len + src_len);
}

// int main(void)
// {
//     char dst[20] = "Hello";
//     const char *src = " World";
//     size_t dstsize = 20;
//     size_t result;

//     result = ft_strlcat(dst, src, dstsize);

//     printf("Final string: '%s'\n", dst);
//     printf("Total length: %zu\n", result);

//     return 0;
// }