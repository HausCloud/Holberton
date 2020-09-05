#include "monty.h"

/**
 * push_ele - push an "element" or node on stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void push_ele(stack_t **head, unsigned int n)
{
	stack_t *new_node, *ptr;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		mfail();

	if ((int_chk(GS.push_int_ptr)) == -1)
		fprintf(stderr, "L%d: usage: push integer\n", n), exit(EXIT_FAILURE);

	new_node->n = atoi(GS.push_int_ptr);
	new_node->next = (*head);
	(*head) = new_node;

	ptr = new_node;
	if (ptr->next != NULL)
		ptr = ptr->next, ptr->prev = new_node;
}

/**
 * print_all - run through list and print all integers
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void print_all(stack_t **head, unsigned int n)
{
	stack_t *ptr;
	(void)head, (void)n;
	if (GS.head_ptr != NULL)
	{
		ptr = GS.head_ptr;
		while (ptr != NULL)
		{
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
	}
}

/**
 * print_top - print integer within top element of stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */


void print_top(stack_t **head, unsigned int n)
{
	(void)head, (void)n;
	if (GS.head_ptr == NULL)
		fprintf(stderr, "L%d: can't pint, stack empty\n", n), exit(EXIT_FAILURE);
	printf("%d\n", GS.head_ptr->n);
}

/**
 * rm_ele - remove top element from stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */


void rm_ele(stack_t **head, unsigned int n)
{

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", n);
		exit(EXIT_FAILURE);
	}
	if ((list_len(*head) == 1))
		*head = NULL;
	else
	{
		*head = (*head)->next;
		free(*head);
		(*head)->prev = NULL;
	}
}

/**
 * swappy - swap top two elements of stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */


void swappy(stack_t **head, unsigned int n)
{
	stack_t *ptr;
	int temp;

	if ((*head) == NULL || (list_len(*head) == 1))
	{
		fprintf(stderr, "L%d: can't swap, stack too short", n);
		exit(EXIT_FAILURE);
	}
	ptr = (*head);
	ptr = ptr->next;
	temp = (*head)->n;
	(*head)->n = ptr->n;
	ptr->n = temp;
}
