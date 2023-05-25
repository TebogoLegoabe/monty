#include "monty.h"

/**
  *rot_top- rotates the stack to the top
  *@head: stack head
  *@count: counter
  *Return: void
 */
void rot_top(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *ptr;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ptr = (*head)->next;
	ptr->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = ptr;
}

/**
  *rot_btm - rotates the stack to the bottom
  *@head: stack head
  *@count: counter
  *Return: void
 */
void rot_btm(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
