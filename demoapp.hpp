
#ifndef __DEMO_H__
#define __DEMO_H__

#include <stdio.h>
#include "./state.hpp"
#include "./globals.hpp"

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
  CTurnstileOpen(CStateManager* pManager) 
  {
    printf("Custom State Created!\n");
    this->pManager = pManager;
  };
  ~CTurnstileOpen() {};


  void transition()
  {
    if(inputBuf == 1)
    {
      pManager->pCurrentState = this;
    }
  }
  void entry()
  {
    printf("Custom state entry.\n");
  }
  void job()
  {
    if(OutFlag == OUTPUT_NOT_SENT)
    {
      printf("Turnstile is open!\n");
      OutFlag = OUTPUT_SENT;
    }
  }
  void exit()
  {
    OutFlag = OUTPUT_NOT_SENT;
  }
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
  CTurnstileClosed(CStateManager* pManager) 
  {
    printf("Custom State Created!\n");
    this->pManager = pManager;
  };
  ~CTurnstileClosed() {};


  void transition()
  {
    if(inputBuf == 2)
    {
      pManager->pCurrentState = this;
    }
  }
  void entry()
  {
    printf("Custom state entry.\n");
  }
  void job()
  {
    if(OutFlag == OUTPUT_NOT_SENT)
    {
      printf("Turnstile is closed.\n");
      OutFlag = OUTPUT_SENT;
    }
  }
  void exit()
  {
    OutFlag = OUTPUT_NOT_SENT;
  }
};



#endif //__DEMO_H__
