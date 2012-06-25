#include "state_machines.h"
#include "output.h"

static STATE_T state;

void GenericStateMachine_Setup(void)
{
  state = IDLE;
}

STATE_T GenericStateMachine_ProcessState(int value)
{
  return IDLE;
}

bool LineCache(char c, char * buffer, int len)
{
  return false;
}

bool LineCache_WithOutput(char c, char * buffer, int len)
{
  return false;
}
