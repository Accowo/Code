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
	stackTest(&stack);

	int buf2[16];
	Range range={.max=15, .min=5};
	Stack stackWithRange = newStackWithRangeCheck(buf2, &range);
	stackTest(&stackWithRange);
	return 0;
}