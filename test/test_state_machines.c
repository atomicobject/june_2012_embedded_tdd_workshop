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
  GenericStateMachine_Setup();

  TEST_ASSERT_EQUAL( IDLE,   GenericStateMachine_ProcessState(10)  );
  TEST_ASSERT_EQUAL( IDLE,   GenericStateMachine_ProcessState(10)  );
  TEST_ASSERT_EQUAL( STATE1, GenericStateMachine_ProcessState(9)   );
  TEST_ASSERT_EQUAL( STATE1, GenericStateMachine_ProcessState(100) );
  TEST_ASSERT_EQUAL( STATE2, GenericStateMachine_ProcessState(99)  );
  TEST_ASSERT_EQUAL( STATE2, GenericStateMachine_ProcessState(1000)  );
}

void test_LineCache(void)
{
  char buffer[16] = {0};
  
  TEST_ASSERT_FALSE(LineCache('A',  buffer, sizeof(buffer)));
  TEST_ASSERT_FALSE(LineCache('B',  buffer, sizeof(buffer)));
  TEST_ASSERT_FALSE(LineCache('C',  buffer, sizeof(buffer)));

  TEST_ASSERT_TRUE(LineCache('\n', buffer, sizeof(buffer)));

  TEST_ASSERT_EQUAL_STRING("ABC\n", buffer);
}

void test_LineCache_does_not_assume_null_buffer(void)
{
  char buffer[4] = { 0, 'b', 0 };

  TEST_ASSERT_FALSE(LineCache('A',  buffer, sizeof(buffer)));
  TEST_ASSERT_EQUAL_STRING("A", buffer);
}

void test_LineCache_does_not_violate_memory_boundaries(void)
{
  char buffer[4] = { 0, 0, 0, 'X' };
  char expected_buffer[4] = {'A', 'B', 'C', 'X'};

  TEST_ASSERT_FALSE(LineCache('A',  buffer, sizeof(buffer) - 1));
  TEST_ASSERT_FALSE(LineCache('B',  buffer, sizeof(buffer) - 1));
  TEST_ASSERT_FALSE(LineCache('C',  buffer, sizeof(buffer) - 1));

  TEST_ASSERT_EQUAL_MEMORY(expected_buffer, buffer, 4);
}

void test_LineCache_should_output_the_line_when_finished(void)
{
  char buffer[16] = {0};

  TEST_ASSERT_FALSE(LineCache_WithOutput('A',   buffer, sizeof(buffer)));
  TEST_ASSERT_FALSE(LineCache_WithOutput('B',   buffer, sizeof(buffer)));
  TEST_ASSERT_FALSE(LineCache_WithOutput('C',   buffer, sizeof(buffer)));

  Serial_Output_Expect("ABC\n");
  TEST_ASSERT_TRUE( LineCache_WithOutput('\n',  buffer, sizeof(buffer)));
}
