/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_rr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:40:20 by nosman            #+#    #+#             */
/*   Updated: 2024/04/21 15:04:08 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
t_stack	*ft_beforlst(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}

void revers_rotate(t_stack **a)
{
	t_stack *last_node;
	t_stack *before_last;

	if (*a == NULL || (*a)->next == NULL)
		return;
	last_node = ft_lstlast(*a);
	before_last = ft_beforlst(*a);
	last_node->next = *a;
	before_last->next = NULL;
	*a = last_node;
}
void	rra(t_stack	**a)
{
	revers_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack	**b)
{
	revers_rotate(b);
	ft_printf("rra\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	revers_rotate(a);
	revers_rotate(b);
	ft_printf("rrr\n");
}
