/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_push.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:08:03 by nosman            #+#    #+#             */
/*   Updated: 2024/04/27 13:34:45 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*curr_b;

	if (*from == NULL)
	{
		printf("stack is empty.\n");
		return ;
	}
	else if (!*to)
	{
		*to = *from;
		*from = (*from)->next;
		(*to)->next = NULL;
	}
	else
	{
		curr_b = *to;
		*to = (*from);
		*from = (*from)->next;
		(*to)->next = curr_b;
	}
}

void	pa(t_stack **b, t_stack	**a)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_stack	**a, t_stack **b)
{
	push(a, b);
	ft_printf("pb\n");
}
