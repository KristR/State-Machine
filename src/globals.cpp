#include "globals.hpp"

inputStruct_t  inputStruct;
outputStruct_t outputStruct;

void updateInput()
{
  scanf("%d", &inputStruct.userInput);
}

void updateOutput()
{
  switch(outputStruct.currentState)
  {
    case STATE_OPEN:
      printf("Turnstile is open!\n");
      break;
      
    case STATE_CLOSED:
      printf("Turnstile is closed.\n");
      break;
  }
}
