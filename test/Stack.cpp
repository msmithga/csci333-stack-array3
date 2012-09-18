#include "gtest/gtest.h"
#include "../src/Stack.h"

TEST(StackTest, Push) {
  Stack* s = new Stack();
  for(int i = 0; i < 20; ++i) {
    s->push(i);
  }

  EXPECT_EQ(19, s->peek());
  EXPECT_EQ(20, s->size());
  delete s;
}
