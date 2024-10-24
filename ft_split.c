/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:47:58 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/24 20:44:27 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	word_counter;

	i = 0;
	word_counter = 0;
	if (s == (NULL))
		return (0);
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_counter++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
		{
			i++;
		}
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len_of_word;
	int		start;
	char	*dest;
	int		j;

	i = 0;
	len_of_word = 0;
	start = i - len_of_word;
	j = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		len_of_word++;
		i++;
	}
	dest = malloc((len_of_word +1) * sizeof(char));
	while (j < len_of_word)
	{
		dest[j] = s[start + j];
		j++;
	}
	dest[j] = '\0';
}

void	free_split(char **split_array)
{
	
}
