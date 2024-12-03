/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomez-d <jgomez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 04:14:59 by jhoyos-c          #+#    #+#             */
/*   Updated: 2024/12/02 06:05:25 by jgomez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char *ft_strchr(char *s, int c)
{
	int	i;
	i = 0;
	while(*s)
	{
		if(s[i] == (char)c)
			return (&s[i])
		i++;
	}
	return(NULL);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (start >= strlen)
		return (NULL);
	if (len > strlen - start)
		len  = strlen - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return(NULL);
	ft_memmove(str, s, len);
	str[len + 1] = '\0';
	return (str);
}
char *ft_strjoin(void *s1, void *s2)
{
	ssize_t	i;

	i = 0;
	if(!s1)
	{
		
	}
}