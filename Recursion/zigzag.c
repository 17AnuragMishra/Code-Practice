#include<stdio.h>
void zigzag(int n){
    printf("%d ", n);
    zigzag(n-1);
    printf("%d ", n);
    zigzag(n-1);
    printf("%d ", n);
    return;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    zigzag(n);
    return 0;
}