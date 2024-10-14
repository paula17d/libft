/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:35:56 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 20:46:14 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	int		i;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (search_str == '\0')
		return ((char *)&str[ft_strlen(str)]);

	while (str[i] != '\0')
	{
		if (str[i] == (char) search_str)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}


// int main(void)
// {
//     const char *str = "Hello, World!";
//     char search_char = 'o'; 
//     char *result;

//     result = ft_strchr(str, search_char);
//     if (result)
//         printf("Character '%c' found at position: %ld\n", search_char, result - str);
//     else
//         printf("Character '%c' not found in the string.\n", search_char);

//     search_char = 'x';
//     result = ft_strchr(str, search_char);
//     if (result)
//         printf("Character '%c' found at position: %ld\n", search_char, result - str);
//     else
//         printf("Character '%c' not found in the string.\n", search_char);

//     result = ft_strchr(str, '\0');
//     if (result)
//         printf("Null terminator found at position: %ld\n", result - str);
//     else
//         printf("Null terminator not found in the string.\n");

//     return 0;
// }
