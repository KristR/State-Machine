#include <stdio.h>
#include "./state.hpp"
#include "./demoapp.hpp"
#include "./globals.hpp"

int main()
{
  initDemo();
  
  while(true)
  {
    scanf("%d", &inputStruct.userInput);
    runDemo();
  }
  
  return 0;
}
