#include<stdio.h>
#include<stdlib.h>
#include "push_swap.h"
// struct Node
// {
// 	int data;
// 	struct Node* next;
// };

void insert(t_stack **root, int item)
{
	t_stack *temp;
	t_stack *ptr;

	temp = (t_stack *) malloc(sizeof(t_stack));
	if (!temp)
		return ;
	temp->value = item;
	temp->next = NULL;
	if (*root == NULL)
		*root = temp;
	else
	{
		ptr = *root;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}

void print(t_stack* root)
{
	while (root != NULL)
	{
		printf("{%d}->", root->value);
		root = root->next;
	}
	printf("{\\n}\n");
}

t_stack *ft_arr_to_linkedlist(int arr[], int n)
{
	t_stack *root = NULL;
	int i;

	i = 0;
	while (i < n)
	{
		insert(&root, arr[i]);
		i++;
	}
	return (root);
}
// int main()
// {
// 	int arr[] = { 0, 2, 3, 5, 1 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	//i think we should maloc here for the whole linked ist
// 	struct Node* root = arrayToList(arr, n);
// 	print(root);
// 	return 0;
// }

