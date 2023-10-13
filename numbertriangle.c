// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j=j+2){
//             printf("%d", j);
//         }
//         printf("\n");
//     }}
#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
     int a=1;
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=i;j++){
            //   a=a+2; see the variations
            printf("%d ", a);
            // a=a+2;
        }
        printf("\n");
    }}
