#include <stdio.h>
#include "./state.hpp"

int userInput;

int main()
{
	// Define state manager
	CStateManager myManager;

	// Define all states
	CSomeState someState(&myManager);
	
	// Populate manager's list of states
	myManager.stateList[0] = &someState;

	// Run some state methods
	someState.transition();
	someState.entry();
	someState.job();
	someState.exit();

	scanf("%d", &userInput);
  printf("Stored input:%d\n", userInput);

	// Run state selector method
	myManager.pickState();

	// Check if state has set pCurrentState to it's own address in the manager
	printf("%p\n", myManager.pCurrentState);

	myManager.runState();

	return 0;
}
