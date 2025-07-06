#include "./demoapp.hpp"

// Define state manager
CStateManager myManager;

// Define all states
CTurnstileOpen   openState(&myManager);
CTurnstileClosed closedState(&myManager);


void initDemo()
{  
  // Populate manager's list of states
  myManager.stateList[0] = &openState;
  myManager.stateList[1] = &closedState;
}

void runDemo()
{
  myManager.pickState();
  myManager.runState();
}
