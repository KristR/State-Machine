#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>

class CStateManager
{
public:
	CStateManager()
	{
		printf("Manager Created!\n");
	}
};

class IState
{
public:
	virtual void entry() = 0;
	virtual ~IState() = 0;
};

inline IState::~IState() {}


class CSomeState : public IState
{
public:
	CSomeState() {};
	~CSomeState() {};

	void entry()
	{
		printf("Entered custom made state.\n");
	}
};



#endif //__MAIN_H__
