/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 04:15:12 by jhoyos-c          #+#    #+#             */
/*   Updated: 2024/12/02 06:05:29 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char *ft_strchr(char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);
ssize_t	read_line(char *buffer, int fd);
char *update_buffer(char *bufffer, ssize_t line_leng);
char	*get_new_line(char *buffer);
char *ft_strjoin(void *s1, void *s2);

#endif
