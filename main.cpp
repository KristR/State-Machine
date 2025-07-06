#include <stdio.h>
#include "./state.hpp"
#include "./demoapp.hpp"
#include "./globals.hpp"

int main()
{
  initDemo();
  
  while(true)
  {
    scanf("%d", &inputBuf);
    runDemo();
  }
  
  return 0;
}
