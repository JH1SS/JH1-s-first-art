#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    if (N<0){
      N = -N;
      printf("-");
    }
    while(N%10==0){
      N/=10;
    }
    do{
      int x=N%10;
      N/=10;
      printf("%d", x);
    }while(N!=0);
 return 0; 
}