
#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include "demoapp.hpp"


typedef struct {
	int userInput;
} inputStruct_t;

typedef struct {
  state_e currentState;
} outputStruct_t;

void updateInput();
void updateOutput();

extern inputStruct_t  inputStruct;
extern outputStruct_t outputStruct;

#endif //__GLOBALS_H__
