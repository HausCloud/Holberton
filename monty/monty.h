#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_struct - is a global struct :/
 * @push_int_ptr: integer argument of push
 * @list_ptr: ptr
 * @head_ptr: ptr to the beginning of list
 */

struct global_struct
{
	char *push_int_ptr;
	char *list_ptr;
	stack_t *head_ptr;
} GS;

/**
 * cmd_line_chk - checks if the command line argument is valid
 * @str: av[1]
 * @n: argc
 */

void cmd_line_chk(char *str, int n); /* check for file & cmd line validity */

/**
 * int_chk - checks whether a string is all integers
 * @str: input string
 * Return: -1 if string is not entirely made of integers * 0 on success
 */

int int_chk(char *str); /* checks string if it is an integer */

/**
 * mfail - print malloc error and exit
 */

void mfail(void); /* exit if malloc fails */

/**
 * free_list - traverses a list and frees each node (freeing list)
 * @ptr: GS.head_ptr (ptr to beginning of list)
 */

void free_list(stack_t *ptr);

/**
 * list_len - return number of nodes with list
 * @ptr: ptr to beginning of list
 * Return: number of nodes
 */

int list_len(stack_t *ptr);

/**
 * push_ele - push an element or node on stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void push_ele(stack_t **head, unsigned int n); /* push opcode */

/**
 * print_all - run through list and print all integers
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */
void print_all(stack_t **head, unsigned int n); /* pall opcode */

/**
 * print_top - print integer within top element of stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */
void print_top(stack_t **head, unsigned int n); /* pint opcode */
/**
 * rm_ele - remove top element from stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */
void rm_ele(stack_t **head, unsigned int n); /* pop opcode */

/**
 * swappy - swap top two elements of stack
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void swappy(stack_t **head, unsigned int n); /* swap opcode */

/**
 * sum - add integers from top two elements and combine into one
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void sum(stack_t **head, unsigned int n); /* add opcode */

/**
 * diff - subtract integers from top two elements and combine into one
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void diff(stack_t **head, unsigned int n); /* add opcode */

/**
 * chara - print ascii value of n at top element
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void chara(stack_t **head, unsigned int n); /* add opcode */

/**
 * nada - do nothing
 * @head: GS.head_ptr (ptr to beginning of list)
 * @n: line number
 */

void nada(stack_t **head, unsigned int n); /* nop opcode */

#endif
