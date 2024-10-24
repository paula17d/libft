/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:56:23 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/22 21:03:48 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_memory;
	int		*ptr;

	total_memory = count * size;
	ptr = malloc(total_memory + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[total_memory + 1] = 0;

	return ((void *) ptr);
}
