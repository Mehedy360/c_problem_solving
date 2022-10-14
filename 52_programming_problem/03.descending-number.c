#include <stdio.h>

int main()
{
  int i;
  int num_end = 1000;
  for (i = num_end; i >= 1; i--)
  {
    if (i % 5 == 0)
    {
      printf("\n");
    }
    printf("%d \t", i);
  }
  return 0;
}