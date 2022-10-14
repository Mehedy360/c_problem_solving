// https://www.facebook.com/profile.php?id=100070767671286
// যোগ সিদ্ধি সংখ্যা
#include <stdio.h>
int main()
{
  int n, result = 0;
  scanf("%d", &n);
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      result += i;
    }
  }
  if (result + 1 == n)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
