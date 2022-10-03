/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:53:16 by jvigneau          #+#    #+#             */
/*   Updated: 2022/08/26 20:24:24 by jvigneau         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define OPEN_MAX 12000

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*line_read;
	int			len;

	if (fd < 0 || fd > OPEN_MAX)
		return (NULL);
	len = the_one_that_reads(&buffer[fd], fd);
	if (!len)
		len = len_n_seek(buffer[fd], '\0');
	if (!len)
	{
		free(buffer[fd]);
		return (NULL);
	}
	line_read = malloc(sizeof(char) * len + 1);
	if (!line_read)
		return (NULL);
	the_one_that_copies(&buffer[fd], &line_read, len);
	return (line_read);
}
