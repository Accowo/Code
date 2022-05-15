#include "stack.h"

bool validateRange(Validator *this, int val)
{
	Range *pRange = (Range *)(this->pDate);
	return pRange->max >= val && pRange->min <= val;
}

bool validatePrevious(Validator *this, int val)
{
	PreviousValue *previous = (PreviousValue *)(this->pDate);
	if (val < previous->previousValue){
		return false;
	}
	previous->previousValue = val;

	return true;
}
static bool isStackFull(const Stack *this)
{
	return this->top==this->size;
}

static bool isStackEmpty(const Stack *this)
{
	return this->top == 0;
}
static bool validate(Validator *pValidator, int val)
{
	if (!pValidator){
		return true;
	}
	return pValidator->validate(pValidator, val);
}
bool push(Stack *this, int val)
{
	if (isStackFull(this) || !validate(this->pValidator, val))	
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
