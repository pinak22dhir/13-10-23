#include<stdio.h>
int main(){
    int n; 
    printf("enter n: ");
    scanf("%d", &n);
    int nsp=n/2;
    int nst=1;
  
    int ml=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if (i<ml){
            nst+=2;
            nsp--; }
            else{
                nst-=2;
                nsp++;
            }
        printf("\n");
    }
return 0;
}