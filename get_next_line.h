/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferrad <sferrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 03:26:27 by sferrad           #+#    #+#             */
/*   Updated: 2024/11/29 16:29:27 by sferrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_is_a_new_line(char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_stash(char *buffer, int readf, char *stash, int fd);
void	ft_bzero(void *s, size_t n);
char	*ft_save(char *save);
char	*ft_extract_line(char *stash);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
#endif