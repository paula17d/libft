/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:58:36 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/16 22:01:44 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	point;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			point = 0;
			while (haystack[i + point] == needle[point] && \
			(i + point) < len && needle[point] != '\0')
			{
				point++;
			}
			if (needle[point] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
//     const char	*haystack = "Hello, welcome to 42!";
//     const char	*needle = "welcome";
//     size_t		len = 20;
//     char		*result;

//     result = ft_strnstr(haystack, needle, len);
//     if (result)
//         printf("Found needle: %s\n", result);
//     else
//         printf("Needle not found within the first %zu characters.\n", len);

//     const char	*needle2 = "goodbye";
//     result = ft_strnstr(haystack, needle2, len);
//     if (result)
//         printf("Found needle: %s\n", result);
//     else
//         printf("Needle not found within the first %zu characters.\n", len);

//     const char	*needle3 = "";
//     result = ft_strnstr(haystack, needle3, len);
//     if (result)
//         printf("Found needle (empty needle): %s\n", result);
//     else
//         printf("Needle not found within the first %zu characters.\n", len);

//     return 0;
// }