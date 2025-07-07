#include "globals.hpp"

inputStruct_t  inputStruct;
outputStruct_t outputStruct;

void updateInput()
{
  scanf("%d", &inputStruct.userInput);
}

void updateOutput()
{
  printf("Output:%d\n", outputStruct.currentState);
}
