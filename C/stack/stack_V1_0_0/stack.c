#include <stdbool>
#include "stack.h"

int buf[16];
int top = 0;

bool isStackFull(void)
{
/*  way 1
	if (top == 16)
	{
		return true;
	}
	else{
		return false;
	}
*/
// way 2	
	return top==sizeof(buf)/sizeof(int);
}


bool isStackEmpty(void)
{
/* way 1
	if (top == 0)
	{
		return true;
	}
	return false;
*/
// way 2
	return top == 0;
}
bool push(int val)
{
	if (isStackFull())	
	{
		return false;
	}
	buf[top++]=val;
	return true;
}

bool pop(int *pRet)
{
	if(isStackEmpty())
	{
		return false;
	}

 	*pRet =	buf[--top];
	return true;

}
