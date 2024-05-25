/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:40:33 by myousaf           #+#    #+#             */
/*   Updated: 2024/05/22 10:12:11 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_stack
{
	int value;
	struct s_stack *next;
}	t_stack;

typedef struct	s_stack_node
{
	t_stack	head;
	t_stack	tail;
}	t_stack_node;

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>
# include <limits.h>
# include <stdio.h>

char	**parsing(char *av);
size_t	ft_arrlen(int *arr);
int		ft_intarr_len(int *arr, size_t size);
int		ft_strarr_len(char **arr);
void	ft_free_arr(char **arr);
void	ft_free_arr_int(int *arr);
int		ft_check_doubles(int *splited_arr, int arrlen);
void	ft_print_array(char **arr);
void	ft_radixsort(int *arr[], int n);
char	**ft_string_check(char *s);

void	count_sort(int arr[], int n, int exp);

// int		*ft_join_array(int *int_arr, size_t int_arr_size, char **str_arr);
int*	ft_join_array(size_t *array_size, int *array, char **str);

int	ft_sign_check(char **splited_arr, int i);
// int	ft_check_digit(char **splited_arr, int i, int k);
int	ft_check_digit(char digit);
int	ft_int_max_min(long long result);
int	ft_flag_check(int broken);
int	ft_arr_check(char **splited_arr, int i, int k);

// debug funtions
void	print_array(int *arr, size_t l);

//Artay to linked list
void insert(t_stack **root, int item);
void print(t_stack* root);
t_stack *ft_arr_to_linkedlist(int arr[], int n);

//stack operations
void	swap(t_stack **head);
void	push(t_stack **from, t_stack **to);
void	rotate(t_stack **stack);
void	revers_rotate(t_stack **a);


//stack a
void	sa(t_stack	**a);
void	pa(t_stack **b, t_stack	**a);
void	ra(t_stack	**a);
void	rra(t_stack	**a);

//stack b
void	sb(t_stack **b);
void	pb(t_stack	**a, t_stack **b);
void	rb(t_stack	**b);
void	rrb(t_stack	**b);

//Both Stacks
void	ss(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);

t_stack	*ft_beforlst(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);

//turk
int which_to_sort(t_stack *list);
int	stack_length(t_stack *stack);
void ft_turk(t_stack **a, t_stack **b);
char *operation_type(t_stack *list, t_stack *node);

/* stack sort operations */
// void	sort_four(t_stack *alias_list, t_stack *stack_b);
// void	sort_five(t_stack *stack_a, t_stack *stack_b);

/* TEMP */
// void	uncle(t_stack *stack_a, t_stack *stack_b);



//push swap .c
t_stack *ft_alias(t_stack *list, int array_size);

void get_info(t_stack *list);

// sort_five.c
void sort_five(t_stack *stack_a, t_stack *stack_b);

// sort_four_more.c
void	sort_four(t_stack *alias_list, t_stack *stack_b);
void	sort_more(t_stack *a, t_stack *b);

//sort_list.c
void	sort_small(t_stack *alias_list, t_stack *stack_b, int stack_size);
void	ft_sort_list(t_stack *alias_list);

//sort_two_three.c
bool	is_it_sorted(t_stack *list);
t_stack	*find_max(t_stack *stack);
void sort_three(t_stack **a);

//sort_utils.c
int list_size(t_stack *list);
int		get_min(t_stack *list);
int		get_max(t_stack *list);
int		get_pos(t_stack *list, int min);
int		arr_len(int *arr);

//sort_till_100.c
void	sort_medium(t_stack *a, t_stack *b);
void	push_the_chunk(t_stack *a, t_stack *b, int min, int max);
void	sort_the_push_chunk(t_stack *a, t_stack *b);

// void	perr_test(char *s, int status)
// {
// 	ssize_t	i;

// 	i = 0;
// 	while ('\0' != s[i])
// 		write (1, &s[i], 1);
// 	exit (status);
// }

#endif
