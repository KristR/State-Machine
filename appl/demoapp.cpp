#include "demoapp.hpp"
#include "globals.hpp"

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

// ==================== CTurnstileOpen Member Definitions ====================
CTurnstileOpen::CTurnstileOpen(CStateManager* pManager) 
{
  printf("Custom State Created!\n");
  this->pManager = pManager;
};

void CTurnstileOpen::transition()
{
  if(inputStruct.userInput == 1)
  {
    pManager->pCurrentState = this;
  }
}

void CTurnstileOpen::entry()
{
  // Do nothing
}

void CTurnstileOpen::job()
{
  if(OutFlag == OUTPUT_NOT_SENT)
  {
    printf("Turnstile is open!\n");
    OutFlag = OUTPUT_SENT;
  }
}

void CTurnstileOpen::exit()
{
  OutFlag = OUTPUT_NOT_SENT;
}

// ==================== CTurnstileClosed Member Definitions ====================
CTurnstileClosed::CTurnstileClosed(CStateManager* pManager) 
{
  printf("Custom State Created!\n");
  this->pManager = pManager;
};

void CTurnstileClosed::transition()
{
  if(inputStruct.userInput == 2)
  {
    pManager->pCurrentState = this;
  }
}

void CTurnstileClosed::entry()
{
  // Do nothing
}

void CTurnstileClosed::job()
{
  if(OutFlag == OUTPUT_NOT_SENT)
  {
    printf("Turnstile is closed.\n");
    OutFlag = OUTPUT_SENT;
  }
}

void CTurnstileClosed::exit()
{
  OutFlag = OUTPUT_NOT_SENT;
}


