#include "state.hpp"

void CStateManager::pickState()
{
  for(int i = 0; i < STATE_COUNT; i++)
  {
    stateList[i]->transition();

    if( (pCurrentState != pPreviousState) &&
        (pCurrentState != NULL) )
    {
      if(pPreviousState != NULL)
      {
        pPreviousState->exit();
      }
      pPreviousState = pCurrentState;
      pCurrentState->entry();
      break;
    }
  }
}

void CStateManager::runState()
{
  pCurrentState->job();
}
