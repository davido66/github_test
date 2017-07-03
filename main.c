#include "stdio.h"

static int add(int a, int b);

/*main loop*/
int main(void)
{
  printf("Test repo");
  add(5, 8);

  return 0;
}

static int add(int a, int b)
{
  return a+b;
}