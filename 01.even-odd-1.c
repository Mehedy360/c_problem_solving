#include <stdio.h>
int main() {
    int T;
    int n;
    scanf("%d", &T);
    for(short i =1; i<=T; i++){
        scanf("%d", &n);
        if(n%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }

  return 0;
}


// another option


/*
#include <stdio.h>
int main() {
    int T;
    int n;
    scanf("%d", &T);
    short i =1;
    while(i<=T){
        scanf("%d", &n);
        if(n%2==0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
         i++;
    }

  return 0;
}*/
