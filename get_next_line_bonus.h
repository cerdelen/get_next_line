/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:33:42 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/13 21:33:42 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>

# include <stdio.h>

# include <stdlib.h>

# include <string.h>				//dont need

char	*get_next_line(int fd);
char	*appending(char *str1, char *str2);
char	*get_line(char *str1, char **remainderarr, int fd, char *buff);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif