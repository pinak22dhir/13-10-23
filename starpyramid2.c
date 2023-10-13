#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    // int a=1;
    // int b=1;
 
    for(int i=1;i<=n;i++){
    
    for(int k=1;k<=n-i;k++){
        printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("%d",j); }
            for(int l=1;l<=i-1;l++){
printf("*");
            }
       
        printf("\n");
    }
  
    return 0;
}