/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:46:41 by lgiband           #+#    #+#             */
/*   Updated: 2022/05/05 10:59:08 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif 
# include <stdlib.h>
# include <unistd.h>

/*get_next_line.c*/
char	*get_next_line(int fd);
char	*ft_get_line(char *prev_read);
char	*ft_cut_last_read(char *prev_read);
char	*ft_read(int fd, char *prev_read);

/*get_next_line_utils.c*/
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoin2(char *s1, char *s2, char *result, size_t size1);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
#endif