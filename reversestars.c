#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    int nst=n;
    int nsp=0;
    
    for( int i=1;i<=n;i++){
         for(int j=1;j<=nsp;j++){
        printf(" ");
    }
     nsp++;

        for(int k=1;k<=nst;k++){
        printf("*");
    }
    //  nsp++;
        nst--;
        
  
    // for(int k=1;k<=nst;k++){
    //     printf("*");
    // }
    // nst--;
printf("\n");
}
return 0;}
