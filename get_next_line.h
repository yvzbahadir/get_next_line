/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:07:22 by ykilicar          #+#    #+#             */
/*   Updated: 2023/03/12 14:24:15 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3

# endif

int		ft_strlen(char *c);
int		ft_find(char *finder);
char	*ft_line(char *handle_string);
char	*ft_clean(char *handle_string);
char	*ft_read(int fd, char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *lft_str, char *buff);

#endif
