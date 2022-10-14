#include <stdio.h>
#include <string.h>
int main(){
  int test_case, i;
  char n[101];
  scanf("%d", &test_case);
  for(i=1; i<=test_case; i++){
    scanf("%s", &n);
    int length = strlen(n);
    int last_digit = n[length -1]-48;
    if(last_digit %2==0){
      printf("even\n");
    }else{
      printf("odd\n");
    }
  }
  return 0;
}

/*
  Why -48?
  because, char n = '0'
  (char)'0'= (Ascii dec)48
  (char)'1'= (Ascii dec)49
  (char)'2'= (Ascii dec)50

  So how to convert (char)'0' to (int)0
  just use (char)'0' - 48 = (int)0
*/