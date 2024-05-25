/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousaf <myousaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:28:41 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/08 16:33:31 by myousaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int* ft_join_array(size_t *array_size, int *array, char **str)
{
	size_t	i[2];
	size_t	len;
	int *new_array;

	new_array = NULL;
	ft_memset(i, 0, sizeof(i));
	len = ft_strarr_len(str);
	new_array = malloc(sizeof(int) * (len + *array_size));
	if (!new_array)
		return (0);
	while (i[0] < *array_size)
	{
		new_array[i[0]] = array[i[0]];
		i[0]++;
	}
	while (str[i[1]])
	{
		new_array[i[0] + i[1]] = ft_atoi(str[i[1]]);
		i[1]++;
	}
	ft_free_arr(str);
	if (*array_size)
		free(array);
	*array_size += len;
	return (new_array);
}
