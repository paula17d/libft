/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:38:54 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/24 21:08:14 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*substring;
	size_t	i;

	str_len = strlen(s);
	i = 0;
	if (s == NULL || start >= len)
		return ("");
	else
		len = ft_strlen(str);

	if str_len < s

}
