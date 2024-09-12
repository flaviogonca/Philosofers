/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:01:38 by fmalungo          #+#    #+#             */
/*   Updated: 2024/09/11 18:52:15 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHILO_H
# define	PHILO_H

#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct s_philo
{
	int	id;
	struct s_philo *node;
}		t_philo;

bool    input_error(char **av);
int     ft_atoi(const char *nptr);
void    create_philo(t_philo **philo);

#endif
