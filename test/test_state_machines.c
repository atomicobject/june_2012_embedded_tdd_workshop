#include "unity.h"
#include "state_machines.h"
#include "mock_output.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_GenericStateMachine_Setup(void)
{
  TEST_IGNORE_MESSAGE("Uncomment tests to enable 'state machine' example.");

  GenericStateMachine_Setup();

  /* TEST_ASSERT_EQUAL( IDLE,   GenericStateMachine_ProcessState(10)  ); */
  /* TEST_ASSERT_EQUAL( IDLE,   GenericStateMachine_ProcessState(10)  ); */
  /* TEST_ASSERT_EQUAL( STATE1, GenericStateMachine_ProcessState(9)   ); */
  /* TEST_ASSERT_EQUAL( STATE1, GenericStateMachine_ProcessState(100) ); */
  /* TEST_ASSERT_EQUAL( STATE2, GenericStateMachine_ProcessState(99)  ); */
}

void test_LineCache(void)
{
  char buffer[16] = {0};
  
  TEST_IGNORE_MESSAGE("Uncomment tests to enable 'state machine' example.");

  /* TEST_ASSERT_FALSE(LineCache('A',  buffer, sizeof(buffer))); */
  /* TEST_ASSERT_FALSE(LineCache('B',  buffer, sizeof(buffer))); */
  /* TEST_ASSERT_FALSE(LineCache('C',  buffer, sizeof(buffer))); */

  /* TEST_ASSERT_TRUE(LineCache('\n', buffer, sizeof(buffer))); */

  /* TEST_ASSERT_EQUAL_STRING("ABC\n", buffer); */
}

void test_LineCache_should_output_the_line_when_finished(void)
{
  char buffer[16] = {0};

  /* TEST_ASSERT_FALSE(LineCache('A',   buffer, sizeof(buffer))); */
  /* TEST_ASSERT_FALSE(LineCache('B',   buffer, sizeof(buffer))); */
  /* TEST_ASSERT_FALSE(LineCache('C',   buffer, sizeof(buffer))); */
  /* TEST_ASSERT_TRUE( LineCache('\n',  buffer, sizeof(buffer))); */

  /* Serial_Output_Expect("ABC\n"); */
}
