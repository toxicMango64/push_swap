/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_swap.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:56:13 by nosman            #+#    #+#             */
/*   Updated: 2024/04/19 10:47:01 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_stack **head)
{
	t_stack *temp;

	if ((*head != NULL) && ((*head)->next != NULL))
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = (*head)->next;
		(*head)->next = temp;
	}
}

void	sa(t_stack	**a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
