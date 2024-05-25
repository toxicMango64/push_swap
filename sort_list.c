/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:28:17 by nosman            #+#    #+#             */
/*   Updated: 2024/05/22 10:15:36 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_stack *alias_list, t_stack *stack_b, int stack_size)
{
	(void)stack_b;
	if (is_it_sorted(alias_list))
		return ;
	if (stack_size == 2)
		sa(&alias_list);
	else if (stack_size == 3)
		sort_three(&alias_list);
	else if (stack_size == 4)
		sort_four(alias_list, stack_b);
	else
		sort_more(alias_list, stack_b);
}

void	ft_sort_list(t_stack *alias_list)
{
	t_stack *stack_b = NULL;
	int		list_len;

	list_len = list_size(alias_list);
	if (list_len == 1)
		return ;
	else if (list_len >= 2 && list_len <= 34)
		sort_small(alias_list, stack_b, list_len);
	else if (list_len >= 35 && list_len <= 134)
		sort_medium(alias_list, stack_b);
	else
		printf("handle more");
	// else if (list_len == 100)
	// {
	// 	sort_medium();
	// }
	// else if (list_len == 500)
	// {
	// 	sort_large();
	// }
	// else
	// {
	//  sort_rest();
	// }
}
