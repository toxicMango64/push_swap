/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_till_100.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 09:48:55 by nosman            #+#    #+#             */
/*   Updated: 2024/05/22 18:10:50 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_the_push_chunk(t_stack *a, t_stack *b)
{
	int	size;
	int	max;
	int	pos;
	int	mid;

	while (1)
	{
		max = get_max(b);
		pos = get_pos(b, max);
		size = list_size(b);
		mid = size / 2;
		if ((b)->value == max)
			pa(&a, &b);
		else if (pos <= mid)
			rb(&b);
		else
			rrb(&b);
		if (size == 2)
			break ;
	}
	if ((b)->value < (b)->next->value)
		sb(&b);
	pa(&a, &b);
	pa(&a, &b);
}

void	push_the_chunk(t_stack *a, t_stack *b, int min, int max)
{
	int	size;

	size = 0;
	while (1)
	{
		printf ("lstsz= {%i}\nmax= {%i}\nmin= {%i}\n",
		size, max, min);
		if ((a)->value >= min && (a)->value <= max)
		{
			pb(&a, &b);
			if ((b)->value <= (min + max) / 2)
				rb(&b);
		}
		else
			ra(&a);
		if (b)
		{
			size = list_size(b);
			if (size == max + 1)
				break ;
		}
	}
}

void	sort_medium(t_stack *a, t_stack *b)
{
	int	size;
	int	min;
	int	max;
	int	tmp;
	int	i;

	i = 0;
	size = list_size(a);
	min = size / 4;
	min--;
	max = min;
	printf ("\n\n<<<<<<HERE>>>>>>\n\n");
	printf ("list size= {%i}\n\n", size);
	while (max < size)
	{
		printf ("lstsz= {%i}\ni= {%i}\nmax= {%i}\ntmp= {%i}\nmin= {%i}\n",
		size, i, max, tmp, min);
		push_the_chunk(a, b, i, max);
		i = max + 1;
		tmp = max;
		max += min;
	}
	if (size - tmp == 4)
		sort_three(&a);
	else
		sort_more(a, b);
	sort_the_push_chunk(a, b);
}
