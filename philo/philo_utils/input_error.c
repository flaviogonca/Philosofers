/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalungo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:02:37 by fmalungo          #+#    #+#             */
/*   Updated: 2024/09/11 18:21:55 by fmalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * sign);
}

static bool	is_digit(char *s)
{
	if (!(*s))
		return (false);
	if ((*s) == '-')
		return (false);
	else if ((*s) == '+')
		s++;
	while (*s)
	{
		if (*s >= '0' && *s <= '9' && *s != '\0')
			s++;
		else
			return (false);
	}
	return (true);
}

bool	input_error(char **av)
{
	int	i;

	i = 0;
	while (av[++i])
	{
		if (is_digit(av[i]) == false)
			return (false);
	}	
	return (true);
}
