#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d", &n);
    int a=1;
    // int p=1;
    for (int i=1;i<=n;i++){
         int p=1;
        for(int j=1;j<=n-i;j++)
{
    printf(" ");
}  
for(int k=1;k<=a;k++) {
    printf("%d", p);
    p++;
   } 
   a=a+2;
printf("\n");}
return 0;
}