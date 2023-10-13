#include<stdio.h>
int main(){
    int n;
    printf("enter no of lines: ");
    scanf("%d", &n);
    for (int i=1;i<=n; i++)
    {for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        // printf("\n");
        for(int k=1;k<=i;k++){
          printf("*");  
        }
         printf("\n");
        
      
    }
    
    printf("\n");
    return 0;}