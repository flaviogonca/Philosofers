/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:47:01 by fmalungo          #+#    #+#             */
/*   Updated: 2024/09/11 18:58:14 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	t_philo	*philo;
	int	i;

	if (argc < 5 || argc > 6 || input_error(argv) == false)
		return (1);
	i = ft_atoi(argv[1]);
	philo = NULL;
	//memset(philo, 0, sizeof(t_philo));
	while (i--)
		create_philo(&philo);
	if (philo != NULL)
	{
		while (philo != NULL)
		{
			printf("id %d\n", philo->id);
			philo = philo->node;
		}
	}

}
