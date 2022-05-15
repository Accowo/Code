#include "stack.h"

static int buf[STACK_MAX_LEN];
static int top = 0;

static bool isStackFull(void)
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


static bool isStackEmpty(void)
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
