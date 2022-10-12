#include <stdio.h>
int main()
{
  int T, N, i;
  unsigned long long factorial = 1;
  scanf("%d", &T);
  while (T--)
  {
    scanf("%d", &N);
    if (N > 15)
      return 0;
    for (i = 2; i <= N; i++)
    {
      printf("%d ", i);
      factorial = factorial * i;
    }
    printf("%lld\n", factorial);
    factorial = 1;
  }
  return 0;
}