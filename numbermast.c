#include<stdio.h>
int main(){
    int n;
    printf("enter n");

    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    // int a=1;

    for(int p=1;p<=2*n+1;p++){
    printf("%d", p);
   }
   printf("\n");
   for (int i=1;i<=n;i++)
{ int a=1;
    for(int j=1;j<=nst;j++){
  printf("%d", a);
    a++;
} 
 
 for(int k=1;k<=nsp;k++){
    printf(" ");
    a++;
}  
 for(int l=1;l<=nst;l++){
    printf("%d", a);
    a++;
}
  printf("\n");
nst--;
nsp+=2;
}

  return 0;
}