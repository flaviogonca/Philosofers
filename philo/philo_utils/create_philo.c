/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_philo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:32:50 by fmalungo          #+#    #+#             */
/*   Updated: 2024/09/11 19:00:00 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	create_philo(t_philo **philo)
{
	t_philo	*new_philo;

	new_philo = (t_philo *)malloc(sizeof(t_philo));
	if (!new_philo)
		return ;
	new_philo->id = 0;
	new_philo->id++;
	new_philo->node = NULL;
	if (*philo != NULL)
	{
		new_philo->id += (*philo)->id;
		(*philo)->node = new_philo;
	}
	else
		(*philo) = new_philo;
}
