#include <stdio.h>
#include "stack.h"

void stackTest(Stack *stack)
{
	int topVal;
	for (int i = 0; i < 20; i++)
	{
		if (push(stack, i))
		{
			printf("push success:%d\n", i);
		}
		else
		{
			printf("push failed:%d\n", i);
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (pop(stack, &topVal))
		{
			printf("pop success:%d\n", i);
			printf("topVal:%d\n", topVal);
		}
		else
		{
			printf("stack is empty:%d\n", i);
		}
	}
}

int main(){

	int buf[18];
	Stack stack = newStack(buf);
	//stackTest(&stack);

	Range range={.max=15, .min=10};
	PreviousValue previousValue = {.previousValue = 5};

	Validator validator = rangeValidator(&range);
	Validator validator2 = previousValidator(&previousValue);

	Stack stackWithRange = newStackWithValidator(buf, &validator);
	//stackTest(&stackWithRange);

	Stack stackWithPrevious = newStackWithValidator(buf, &validator2);
	stackTest(&stackWithPrevious);

	return 0;
}