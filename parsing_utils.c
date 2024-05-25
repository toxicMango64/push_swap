/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 08:02:28 by myousaf           #+#    #+#             */
/*   Updated: 2024/04/13 12:32:42 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * -> nuha said keep it in mind because of memory leaks
 * and also it is not nesseasxzvsrysaafad let me
 * write it khalas yalla no oy
*/
void	ft_free_arr(char **arr)
{
	size_t	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

void ft_free_arr_int(int *arr)
{
	if (!arr)
		return ;
	free(arr);
}

int	ft_strarr_len(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i])
		i++;
	return (i);
}
