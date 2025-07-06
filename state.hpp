
#ifndef __STATE_H__
#define __STATE_H__

#include <stdio.h>


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

	IState* stateList[1];

	IState* pCurrentState;

	void pickState()
	{
		stateList[0]->transition();

	}

	void runState()
	{
		pCurrentState->job();
	}

};


class CSomeState: public IState
{
private:
	CStateManager* pManager;

public:
	CSomeState(CStateManager* pManager) 
	{
		printf("Custom State Created!\n");
		this->pManager = pManager;
	};
	~CSomeState() {};


	void transition()
	{
		printf("Custom state transition.\n");
		pManager->pCurrentState = this;
	}
	void entry()
	{
		printf("Entered custom made state.\n");
	}
	void job()
	{
		printf("Custom state job.\n");
	}
	void exit()
	{
		printf("Exited custom made state.\n");
	}
};


#endif //__STATE_H__
