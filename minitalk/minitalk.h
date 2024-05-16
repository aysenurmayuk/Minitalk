/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amayuk <amayuk@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:40:48 by amayuk            #+#    #+#             */
/*   Updated: 2024/04/24 16:41:13 by amayuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/ft_printf.h"
# include <signal.h>
# include <unistd.h>
# include <stdio.h>

int		ft_atoi(char *src);
void	bitwise(int pid, char c);
void	signal_handler(int signum);

#endif