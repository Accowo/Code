#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C"{
#endif // !__cplusplus


typedef struct Validator
{
	bool (*const validate)(struct Validator *pThis, int val);
	void *const pDate;
}Validator;

typedef struct 
{
	const int max;
	const int min;
}Range;

typedef struct 
{
	int previousValue;
} PreviousValue;

bool validateRange(Validator *this, int val);
bool validatePrevious(Validator *this, int val);
#define rangeValidator(pRange)     \
	{                              \
		.validate = validateRange, \
		.pDate = pRange            \
	}

#define previousValidator(pPrevious)  \
	{                                 \
		.validate = validatePrevious, \
		.pDate = pPrevious            \
	}

	typedef struct 
{
	int top;
	const size_t size;
	int *const pBuf;
	Validator *const pValidator;
} Stack;

#define newStack(buf)                      \
	{                                      \
		.top = 0,                          \
		.size = sizeof(buf) / sizeof(int), \
		.pBuf = buf,                       \
		.pValidator = NULL                     \
	}

#define newStackWithValidator(buf, Validator) \
	{                                         \
		.top = 0,                             \
		.size = sizeof(buf) / sizeof(int),    \
		.pBuf = buf,                          \
		.pValidator = Validator                         \
	}

bool push(Stack *this, int val);
bool pop(Stack *this, int *pRet);


#ifdef __cplusplus
}
#endif // !__cplusplus
#endif
