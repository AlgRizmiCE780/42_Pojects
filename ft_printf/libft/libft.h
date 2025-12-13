/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 21:31:17 by rahman            #+#    #+#             */
/*   Updated: 2025/12/13 21:02:16 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// Function prototypes for libft
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int	ft_putnbrunsign_fd(unsigned int n, int fd);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);

#endif