#include <stdio.h>

int main()
{
  int T, r, i, j, N;
  scanf("%d", &T);
  for (r = 1; r <= T; r++)
  {
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
      for (j = 1; j <= N; j++)
      {
        printf("*");
      }
      printf("\n");
    }
  }

  return 0;
}
/*
Box 1

*****
*****
*****
*****
*****
*/