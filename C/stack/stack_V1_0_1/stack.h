#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C"{
#endif // !__cplusplus
typedef struct 
{
	int top;
	const size_t size;
	int *const pBuf;	
}Stack;

#define newStack(buf) {\
	.top = 0,\
	.size = sizeof(buf)/sizeof(int),\
	.pBuf = buf\
}

bool push(Stack *this, int val);
bool pop(Stack *this, int *pRet);


#ifdef __cplusplus
}
#endif // !__cplusplus
#endif
