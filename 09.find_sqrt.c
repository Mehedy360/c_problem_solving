#include <stdio.h>
#include <math.h>
int main()
{
  int T, num, sq_root;
  scanf("%d", &T);
  while (T--)
  {
    scanf("%d", &num);
    sq_root = sqrt(num);
    if (sq_root * sq_root == num)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
  return 0;
}
