/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:34:32 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/22 09:39:31 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack *ft_alias(t_stack *list, int array_size)
{
	int len;
	int	index[2];
	int num;
	int	counter;
	int *arr;
	t_stack *temp;
	t_stack *head;
	t_stack *final;

	len = list_size(list);
	temp = NULL;
	index[0] = 0;
	arr = malloc(sizeof(int) * (len + 1));
	head = list;
	while (index[0] < len && list)
	{
		temp = head;
		num = list->value;
		index[1] = 0;
		counter = 0;
		while (index[1] < len && temp != NULL)
		{
			if (num > temp->value)
				counter++;
			temp = temp->next;
			index[1]++;
		}
		arr[index[0]] = counter;
		list = list->next;
		index[0]++;
	}
	final = ft_arr_to_linkedlist(arr, array_size);
	// print(final);
	return final;
}

int	main(int ac, char **av)
{
	size_t	array_size;
	char    **split_strings;
	int		i;
	int     *array = NULL; // gives seg fault

 	// *array = NULL;
	i = 0;
	array_size = 0;
	if (ac < 2 || (av[1] && av[1][0] == '\0'))
		return (printf ("Error\n"), 1);
	while (++i < ac)
	{
		split_strings = ft_string_check(av[i]);
		if (!split_strings)
		    return (1);
		array = ft_join_array(&array_size, array, split_strings);
	}
	ft_check_doubles(array, array_size);
	t_stack *list = ft_arr_to_linkedlist(array, array_size);
	// int len = list_size(list);
	// int min = get_min(list);
	// int max = get_max(list);
	// int pos = get_pos(list, min);
	// printf("length = %d\n", len);
	// printf("minimum = %d && maximum = %d\n", min, max);
	// printf("pos = %d\n", pos);

	t_stack *alias_list = ft_alias(list, array_size);
	print(alias_list);
	print(list);
	// ft_sort_list(alias_list);
	// print(alias_list);
	// print(list);
	return (0);
}
