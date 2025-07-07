#include <stdio.h>
#include "./state.hpp"
#include "./demoapp.hpp"
#include "./io.hpp"

int main()
{
  initDemo();
  
  while(true)
  {
    updateInput();
    
    runDemo();
    
    updateOutput();
  }
  
  return 0;
}
