#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    int nst=n;
    int i;
    
    for( i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        printf(" ");
    }
  
    for(int k=1;k<=nst;k++){
        printf("*");
    }
printf("\n");
}
return 0;}
