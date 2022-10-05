#include <stdio.h>

int main()
{
  int T, N, MSD, LSD, r, i, sum;
  scanf("%d", &T);

  for (r = 1; r <= T; r++)
  {
    scanf("%d", &N);
    LSD = N % 10;
    for (i = 1; i < 5; i++)
    {
      N = N / 10;
    }
    MSD = N;
    sum = MSD + LSD;
    printf("Sum = %d\n", sum);
  }

  return 0;
}