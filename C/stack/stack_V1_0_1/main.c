#include <stdio.h>
#include "stack.h"

int main(){

	int buf[19];
	Stack stack= newStack(buf);

	int topVal;
	for (int i = 0; i < 20; i++)
	{	
		if (push(&stack, i)){
			printf("push success:%d\n",i);
		}else{
			printf("push failed:%d\n", i);
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if(pop(&stack, &topVal)){
			printf("pop success:%d\n", i);
			printf("topVal:%d\n",topVal);
		}else{
			printf("stack is empty:%d\n",i);
		}
	}
	return 0;
}