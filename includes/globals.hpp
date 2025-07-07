
#ifndef __GLOBALS_H__
#define __GLOBALS_H__

typedef struct {
	int userInput;
} inputStruct_t;

typedef struct {
	unsigned char outputArr[50];
} outputStruct_t;

extern inputStruct_t  inputStruct;
extern outputStruct_t outputStruct;

#endif //__GLOBALS_H__
