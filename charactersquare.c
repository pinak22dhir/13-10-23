#include<stdio.h>
int main(){
   int  n;
    printf("enter n");
    scanf("%d", &n);
 int a=1;
    for(int i=1;i<=n;i++){
        // int a=1;
        for(int j=1;j<=n;j++){
            printf("%d", a+64);
            a++;
          
        }
        a++;
        printf("\n");
    }}