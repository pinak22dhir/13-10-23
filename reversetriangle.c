// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }}
//2nd approach
#include<stdio.h>
// int main(){
//     int n;
//     printf("enter n");
//     scanf("%d", &n);
//     // int j=n-i;
//     for(int i=1;i<=n;i++){
//        int k=n-i;
//         for( int j=1;j<=k;j++){
//             printf("*");
//         }
//         printf("\n");
//     }}
//3red approach
int main(){
    int n;
    printf("enter n");
    scanf("%d", &n);
    int a=n;
    // int j=n-i;
    //3rd approach
    for(int i=1;i<=n;i++){
      
        for( int j=1;j<=a;j++){
            printf("#");
        }
        a--;
        printf("\n");
    }
     }