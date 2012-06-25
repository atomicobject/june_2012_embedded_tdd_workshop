#include "state_machines.h"
#include "output.h"

static STATE_T state;

void GenericStateMachine_Setup(void)
{
  state = IDLE;
}

STATE_T GenericStateMachine_ProcessState(int value)
{
  switch(state)
  {
  case IDLE:
    if (value < 10)
    {
      state++;
    }
    break;
  case STATE1:
    if (value < 100)
    {
      state++;
    }
  }
  return state;
}

bool LineCache(char c, char * buffer, int len)
{
  return false;
}
