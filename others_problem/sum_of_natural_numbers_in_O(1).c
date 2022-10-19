#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter the last natural number you want the sum of: ");
  scanf("%d", &n);

  // Runs in Liner Time
  // for (int i = 1; i <= n; i++)
  // {
  //   sum += i;
  // }

  // Runs in Constant time
  sum = (n * n + n) / 2;
  printf("Sum of first %d natural number is: %d\n", n, sum);
  return 0;
}