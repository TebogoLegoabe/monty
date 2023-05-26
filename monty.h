#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1024
#define OP_PUSH "push"
#define OP_PALL "pall"
#define OP_PINT "pint"
#define OP_POP "pop"
#define OP_SWAP "swap"
#define OP_ADD "add"
#define OP_NOP "nop"
#define OP_SUB "sub"
#define OP_DIV "div"
#define OP_MUL "mul"
#define OP_MOD "mod"
#define OP_PCHAR "pchar"
#define OP_PSTR "pstr"
#define OP_ROTL "rotl"
#define OP_ROTR "rotr"
#define OP_QUEUE "queue"
#define OP_STACK "stack"

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
 * struct bus_s - variables - args, file & charac
 * @arg: value
 * @file: pointer to monty file
 * @charac: strchr
 * @lifi: flag
 *
 * Description: carries values through the program
 */
typedef struct stack_ss
{
	char *arg;
	FILE *file;
	char *content;
	int num;
} _stack_t;

extern _stack_t output;

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

/* Function prototypes */

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);

void push(stack_t **top, unsigned int index);
void pall(stack_t **head, unsigned int count);
void pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void _free(stack_t *head);
void pop(stack_t **head, unsigned int count);
void swap(stack_t **head, unsigned int number);
void add(stack_t **head, unsigned int count);
void nop(stack_t **head, unsigned int null);
void sub(stack_t **head, unsigned int count);
void divide(stack_t **head, unsigned int line_number);
void mul(stack_t **head, unsigned int count);
void mod(stack_t **head, unsigned int count);
void _char(stack_t **head, unsigned int counter);
void rot_btm(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void queue(stack_t **head, unsigned int count);
void _stack(stack_t **head, unsigned int count);
void _str(stack_t **head, unsigned int count);
void rot_top(stack_t **head, unsigned int count);

#endif/* MONTY_H */
