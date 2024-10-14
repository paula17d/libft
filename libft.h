/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrettas <pdrettas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:27:11 by pdrettas          #+#    #+#             */
/*   Updated: 2024/10/14 20:45:51 by pdrettas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>

int		ft_isalpha(int x);
int		ft_isdigit(int x);
int		ft_isalnum(int x);
int		ft_isascii(int x);
int		ft_isprint(int x);
size_t	ft_strlen(const char *str);
int		ft_toupper(int x);
int		ft_tolower(int x);
int		ft_atoi(char *str);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *ptr, size_t num);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif


// MONDAY: 7 functions from part1
// TUESDAY: all part 2
// WEDNESDAY: edit makefile. clean everything, submit for eval (before 3pm)

// edit makefile before git commit etc.
// delete notes
// paco 
// paco -s
// at least 3 git commits before submitting project

// ADD FILES to git
// bzero, memcpy, , memmove, strlcpy. strlcat