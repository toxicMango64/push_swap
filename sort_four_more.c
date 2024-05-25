/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_more.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:31:38 by nosman            #+#    #+#             */
/*   Updated: 2024/05/21 15:32:05 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	uncle(t_stack *stack_a, t_stack *stack_b)
{
	pb(&stack_a, &stack_b);
	sort_three(&stack_a);
	pa(&stack_b, &stack_a);
}

void	sort_four(t_stack *alias_list, t_stack *stack_b)
{
	int min;
	int pos;

	min = get_min(alias_list);
	pos = get_pos(alias_list, min);
	if (pos == 1)
		uncle(alias_list, stack_b);
	else if (pos == 2)
	{
		ra(&alias_list);
		uncle(alias_list, stack_b);
	}
	else if (pos == 3)
	{
		rra(&alias_list);
		rra(&alias_list);
		uncle(alias_list, stack_b);
	}
	else
	{
		rra(&alias_list);
		uncle(alias_list, stack_b);
	}
}

void	sort_more(t_stack *a, t_stack *b)
{
	int	i;
	int	min;
	int	pos;
	int	size;
	int	current_size;

	i = 0;
	size = list_size(a);
	min = get_min(a);
	pos = get_pos(a, min);
	while (1)
	{
		current_size = list_size(a);
		if (current_size == 4)
			break ;
		min = get_min(a);
		if ((a)->value == min)
		{
			pb(&a, &b);
			i++;
		}
		else if (pos < size / 2)
			ra(&a);
		else
			rra(&a);
	}
	sort_four(a, b);
}
