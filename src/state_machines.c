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
  int end_of_string = strnlen(buffer, len);
  buffer[end_of_string] = c;

  if ((end_of_string + 1) < len)
    buffer[end_of_string + 1] = 0;

  if (c == '\n')
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool LineCache_WithOutput(char c, char * buffer, int len)
{
  if (LineCache(c, buffer, len))
  {
    Serial_Output(buffer);
    return true;
  }
  else
  {
    return false;
  }
}
