#include "monty.h"

/**
  * nop - Do nothing
  * @head: Pointer to the head of the stack
  * @null: Unsigned integer parameter (unused)
  *
  * Description: This function is a no-operation instruction (nop) in the Monty language.
  *              It does not perform any operations on the stack or modify any data.
  * Return: void
  */
void nop(stack_t **head, unsigned int null)
{
	(void) null;
	(void) head;
}
