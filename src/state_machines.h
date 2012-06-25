#ifndef STATE_MACHINES_H
#define STATE_MACHINES_H

#include <stdbool.h>

typedef enum { IDLE , STATE1 , STATE2 } STATE_T;

void GenericStateMachine_Setup(void);
STATE_T GenericStateMachine_ProcessState(int value);

bool LineCache(char c, char * buffer, int len);
bool LineCache_WithOutput(char c, char * buffer, int len);

#endif /* STATE_MACHINES_H */
