
#ifndef __DEMO_H__
#define __DEMO_H__

#include <stdio.h>
#include "state.hpp"

void initDemo();
void runDemo();

typedef enum {
  STATE_OPEN   = 0,
  STATE_CLOSED = 1
} state_e;

class CTurnstileOpen: public IState
{
private:
  CStateManager* pManager;

public:
  CTurnstileOpen(CStateManager* pManager);
  ~CTurnstileOpen() {};

  void transition();
  void entry();
  void job();
  void exit();
};


class CTurnstileClosed: public IState
{
private:
  CStateManager* pManager;

public:
  CTurnstileClosed(CStateManager* pManager);
  ~CTurnstileClosed() {};

  void transition();
  void entry();
  void job();
  void exit();
};

#endif //__DEMO_H__
