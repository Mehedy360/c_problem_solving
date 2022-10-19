#include <stdio.h>
//একটি সংখ্যার ফ্যাক্টরিয়ালের শেষে কতটি শূন্য (০) আছে, তা বের করতে হবে।
int main()
{
  int T, n, zero = 0;
  scanf("%d", &T);
  while (T--)
  {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
      if (i % 5 == 0)
      {
        zero++;
        if (zero % 5 == 0)
        {
          zero++;
        }
      }
    }
    printf("%d\n", zero);

    zero = 0;
  }

  return 0;
}