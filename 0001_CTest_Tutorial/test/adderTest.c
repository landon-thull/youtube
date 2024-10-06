#include "adder.h"

#include <stdio.h>

#define ASSERT_EQUAL(a, b) !(a == b)

int main()
{
  ASSERT_EQUAL(adder_add(1, 1), 2);
}