/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakbas <nakbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 16:50:25 by nakbas            #+#    #+#             */
/*   Updated: 2024/12/30 21:19:35 by nakbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef BUFFER_MAX
#  define BUFFER_MAX 1024
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_file(int fd, char *buffer);
char	*continuing_nl(char *buffer);
char	*get_nl(char *buf);
int		str_len(const char *str);
char	*str_find_nl(const char *str);
void	*buf_calloc(size_t buffersize);
char	*str_join(char *buffer, char *str);

#endif