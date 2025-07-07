
#ifndef __DEMO_H__
#define __DEMO_H__

#include <stdio.h>
#include "state.hpp"

void initDemo();
void runDemo();


class CTurnstileOpen: public IState
{
private:
  CStateManager* pManager;
  typedef enum {
    OUTPUT_NOT_SENT = 0,
    OUTPUT_SENT     = 1
  } OutStatus;

  OutStatus OutFlag = OUTPUT_NOT_SENT;

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
  typedef enum {
    OUTPUT_NOT_SENT = 0,
    OUTPUT_SENT     = 1
  } OutStatus;

  OutStatus OutFlag = OUTPUT_NOT_SENT;

public:
  CTurnstileClosed(CStateManager* pManager);
  ~CTurnstileClosed() {};

  void transition();
  void entry();
  void job();
  void exit();
};

#endif //__DEMO_H__
