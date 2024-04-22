/*#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter the number: ");
    scanf("%d", &n);
    int factorial = 1;
    for(i=1; i<=n; i++){
        factorial =factorial*i;
        printf("\nfactorial of %d: %d",i, factorial);
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter the number: ");
    scanf("%d", &n);
    int factorial = 1;
    for(i=1; i<=n; i++){
        factorial =factorial*i;
        
    }
    printf("\nfactorial: %d", factorial);
    return 0;
}