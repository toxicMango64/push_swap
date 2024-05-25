/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:29:16 by nosman            #+#    #+#             */
/*   Updated: 2024/05/21 15:44:14 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int list_size(t_stack *list)
{
	int i;

	i = 0;
	if (!list)
		return (0);
	while (list != NULL)
	{
		list = list -> next;
		i++;
	}
	return (i);
}

int get_min(t_stack *list)
{
	int	min;

	min = list->value;
	while (list != NULL)
	{
		if (list->value < min)
			min = list->value;
		list = list->next;
	}
	return (min);
}

int get_max(t_stack *list)
{
	int	max;

	max = list->value;
	while (list != NULL)
	{
		if (list->value > max)
			max = list->value;
		list = list->next;
	}
	return (max);
}

int get_pos(t_stack *list, int min)
{
	int	pos;

	pos = 0;
	while (list != NULL && list->value != min)
	{
		list = list -> next;
		pos++;
	}
	pos++;
	return (pos);
}

int arr_len(int *arr)
{
	int	i;

	i = 0;
	while(arr[i])
		i++;
	return (i);
}
