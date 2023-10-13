#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;}
    // in this type of question we will approach like which is changing type that row or column