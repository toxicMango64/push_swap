/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:42:52 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/21 14:42:57 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	uncle(t_stack *stack_a, t_stack *stack_b)
{
	pb (&stack_a, &stack_b);
	sort_four (stack_a, stack_b);
	pa (&stack_a, &stack_b);
}

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	min;
	int	pos;

	min = get_min(stack_a);
	pos = get_pos(stack_a, min);
	if (pos == 1)
		uncle(stack_a, stack_b);
	else if (pos == 2)
	{
		ra (&stack_a);
		uncle(stack_a, stack_b);
	}
	else if (pos == 3)
	{
		ra (&stack_a);
		ra (&stack_a);
		uncle(stack_a, stack_b);
	}
	else if (pos == 4)
	{
		rra (&stack_a);
		rra (&stack_a);
		uncle(stack_a, stack_b);
	}
	else
	{
		rra (&stack_a);
		uncle(stack_a, stack_b);
	}
}
