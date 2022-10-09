#include <stdio.h>
#include <string.h>
int main()
{
  int T;
  scanf("%d", &T);
  getchar();
  while(T--){
    char str[100005], ch;
    int i , count =1;
    gets(str);
    int len = strlen(str);
    for(i =0; i<len; i++){
      if(str[i]==' ' && str[i+1] !=' '){
        count++;
      }
    }
  printf("%d\n", count);
  }
  return 0;
}
