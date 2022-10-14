#include <stdio.h>
int main()
{
  int T;
  scanf("%d", &T);
  int i = 1;
  while (T--)
  {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int MIN, MAX, mid;
    if (a > b && a > c)
    {
      MAX = a;
      if (b > c)
      {
        mid = b;
        MIN = c;
      }
      else
      {
        mid = c;
        MIN = b;
      }
    }
    else if (b > a && b > c)
    {
      MAX = b;
      if (a > c)
      {
        mid = a;
        MIN = c;
      }
      else
      {
        mid = c;
        MIN = a;
      }
    }
    else if (c > a && c > b)
    {
      MAX = c;
      if (a > b)
      {
        mid = a;
        MIN = b;
      }
      else
      {
        mid = b;
        MIN = a;
      }
    }
    printf("case %d: %d %d %d\n", i++, MIN, mid, MAX);
  }
  return 0;
}