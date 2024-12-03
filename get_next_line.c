/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 04:14:12 by jhoyos-c          #+#    #+#             */
/*   Updated: 2024/12/03 03:05:41 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t	read_line(char *buffer, int fd)
{
	char temp[BUFFER_SIZE + 1];
	ssize_t	bytes_read;
	
	while(bytes_read > 0 && ft_strchr(buffer, '\n'))
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read < 0)
			return (-1);
		if(bytes_read == 0)
			return (0);
		temp[bytes_read] = '\0';
		buffer = ft_strjoin(buffer, temp);
	}
	return (bytes_read);
}

char *get_new_line(char *buffer)
{
	char *line;
	ssize_t	line_leng;

	if (buffer)
	{
		line = ft_substr(buffer, 0, (ft_strlen(buffer) - ft_strlen(ft_strchr(buffer, '\n'))));
		if (!line)
			return (NULL);
		line_leng = ft_strlen(line);
		buffer = update_buffer(buffer, line_leng);
	}
	return (line);
}
char *update_buffer(char *buffer, ssize_t line_leng)
{
	char *aux;
	ssize_t len_rest;

	aux = NULL;
	len_rest = (ft_strlen(buffer) - ft_strlen(ft_strchr(buffer, '\n')));
	aux = ft_substr(buffer, line_leng, len_rest);
}

char	*get_next_line(int fd)
{
	char	*line = NULL;
	static char	*buffer;
	ssize_t	bytes_read;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = read_line(buffer, fd);
	if (bytes_read < 0)
		return (NULL);
	if (bytes_read == 0)
		return (buffer);
	line = get_new_line(buffer);
	return (line);
}

int	main(void)
X{
	int	fd = open("hola.txt", O_RDONLY);
	char *result = get_next_line(fd);
	printf("%s", result);
	close(fd);
}
