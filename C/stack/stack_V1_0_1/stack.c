#include "stack.h"


static bool isStackFull(const Stack *this)
{
	return this->top==this->size;
}

static bool isStackEmpty(const Stack *this)
{
	return this->top == 0;
}
bool push(Stack *this, int val)
{
	if (isStackFull(this))	
	{
		return false;
	}
	this->pBuf[this->top++]=val;
	return true;
}

bool pop(Stack *this, int *pRet)
{
	if(isStackEmpty(this))
	{
		return false;
	}

 	*pRet =	this->pBuf[--this->top];
	return true;

}
