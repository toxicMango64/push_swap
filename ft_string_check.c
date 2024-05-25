/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:40:48 by myousaf           #+#    #+#             */
/*   Updated: 2024/04/13 12:55:12 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * splited_arr[i][k] != NULL
 * splited_arr[i][k] != ft_isdigit
 * splited_arr[i][k] != spaces
 * 
 * char	**parsing(char *s)
*/
char	**ft_string_check(char *s)
{
	int			i;
	int			k;
	int			broken;
	char		**splited_arr;
	long long	result;

	i = 0;
	broken = 0;
	splited_arr = ft_split(s, ' ');
	// casues error
	while (splited_arr[i])
	{
		k = ft_arr_check(splited_arr, i, k);
		if (k != -1)
			break ;
		i++;
		result = ft_atoll(splited_arr[i]);
		broken = ft_int_max_min(result);
		if (broken == 1)
			break ;
		i++;
	}
	if (ft_flag_check(broken) != 0)
		ft_free_arr(splited_arr);
	return (splited_arr);
}

int	ft_check_doubles(int *splited_arr, int arrlen)
{
	int	i;
	int	j;

	i = 0;
	while (i < arrlen)
	{
		j = i + 1;
		while ((j < arrlen) && (splited_arr[i] != splited_arr[j]))
			j++;
		if ((j < arrlen) && (splited_arr[i] == splited_arr[j]))
			return (perr("doubles"), 1);
		i++;
	}
	return (0);
}
