
#ifndef __STATE_H__
#define __STATE_H__

#include <stdio.h>

#define STATE_COUNT (2)


class IState
{
public:
	IState() {};
	virtual ~IState() = 0;
	virtual void transition() = 0;
	virtual void entry() = 0;
	virtual void job() = 0;
	virtual void exit() = 0;
};

inline IState::~IState() {};


class CStateManager
{
public:
	CStateManager()
	{
		printf("Manager Created!\n");
	}

	IState* stateList[STATE_COUNT];

	IState* pPreviousState = NULL;
	IState* pCurrentState  = NULL;

	void pickState();

	void runState();

};


#endif //__STATE_H__
