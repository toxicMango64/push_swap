/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_check_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:55:49 by nosman            #+#    #+#             */
/*   Updated: 2024/04/17 10:55:54 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sign_check(char **splited_arr, int i)
{
	if (splited_arr[i][0] == '-' || splited_arr[i][0] == '+')
	{
		if (!splited_arr[i][1])
		{
			perr("sign broblem\n");
			return (69);
		}
	}
	return (0);
}

int	ft_check_digit(char **splited_arr, int i, int k)
{
	if (splited_arr[i][k] && !ft_isdigit(splited_arr[i][k]))
	{
		perr ("not a digit");
		return (69);
	}
	return (0);
}

int	ft_int_max_min(long long result)
{
	if (result > INT_MAX || result < INT_MIN)
		return (1);
	return (0);
}

int	ft_arr_check(char **splited_arr, int i, int k)
{
	k = 0;
	if (ft_sign_check(splited_arr, i) != 0)
		return (-1);
	k++;
	if (ft_check_digit(splited_arr, i, k) != 0)
		return (-1);
	while (splited_arr[i][k] && ft_isdigit(splited_arr[i][k]))
		k++;
	if (splited_arr[i][k] && (!ft_isdigit(splited_arr[i][k]) && \
			splited_arr[i][k] != 9 && splited_arr[i][k] != 32))
		return (-1);
	return (k);
}

int	ft_flag_check(int broken)
{
	if (broken)
		return (ft_printf ("bad %d\n", broken));
	return (0);
}
