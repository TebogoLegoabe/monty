#include "monty.h"

/**
* _free - frees a doubly linked list
* @head: head of the stack
*
* Return: void
*/
void _free(stack_t *head)
{
	stack_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
