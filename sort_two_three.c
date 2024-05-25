#include "push_swap.h"

bool	is_it_sorted(t_stack *list)
{
	if(!list)
		return(1);
	while(list->next)
	{
		if(list->value > list->next->value)
			return(false);
		list = list->next;
	}
	return(true);
}

t_stack	*find_max(t_stack *stack)
{
	long	max;
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}
void	sort_three(t_stack **a)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

// int which_to_sort(t_stack *a)//my list should be named a (in the subject stack a, b)
// {
// 	// t_stack *b;

// 	if(!is_it_sorted(a))
// 	{
// 		if(stack_length(a) == 2)
// 			sa(&a); // swap
// 		else if (stack_length(a) == 3)
// 			sort_three(&a);
// 		// else if (stack_length(a) == 5)
// 		// 	sort_five(&a);
// 		else
// 			printf("hello");
// 		// ft_turk(&list, &b);//how to ust the other stack on the pic?it should be null ig
// 	}
// 	// free_stack(&list);
// 	return(0);
// }
