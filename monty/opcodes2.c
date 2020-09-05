#include "monty.h"

/**
 * sum - add integers from top two elements and combine into one
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void sum(stack_t **head, unsigned int n)
{
	int temp;

	if ((*head) == NULL || (list_len(*head) == 1))
	{
		fprintf(stderr, "L%d: can't add, stack too short", n);
		exit(EXIT_FAILURE);
	}
	temp = (*head)->n;
	(*head) = (*head)->next;
	(*head)->n += temp;
	free((*head)->prev);
	((*head)->prev = NULL);
}

/**
 * diff - subtract integers from top two elements and combine into one
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void diff(stack_t **head, unsigned int n)
{
	int temp;

	if ((*head) == NULL || (list_len(*head) == 1))
	{
		fprintf(stderr, "L%d: can't add, stack too short", n);
		exit(EXIT_FAILURE);
	}
	temp = (*head)->n;
	(*head) = (*head)->next;
	(*head)->n -= temp;
	free((*head)->prev);
	((*head)->prev = NULL);
}

/**
 * chara - print ascii value of n at top element
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void chara(stack_t **head, unsigned int n)
{
	int var;

	if ((*head) == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", n);
		exit(EXIT_FAILURE);

	}
	var = (*head)->n;
	if (var < 65 && var > 90 && var < 97 && var > 122)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", n);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", var);
}


/**
 * nada - do nothing
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void nada(stack_t **head, unsigned int n)
{
	(void)head, (void)n;
}
