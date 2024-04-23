// #include<stdio.h>
// void numbers(int x,int n){
//     if(x>n) return;
//     printf("%d",x);
//     numbers(x+1,n);
//     return;

// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d ", &n);
//     numbers(1,n);
//     return 0;
// }

//2nd method

#include<stdio.h>
void increasing(int n){
    if(n==0) return;
    increasing(n-1);
    printf("%d\t", n);
    return;
}
void decreasing(int n){
    if(n==0) return;
    printf("%d\t", n);
    decreasing(n-1);
}
int main(){
    int n;
    printf("Enter the number: ");\
    scanf("%d",&n);
    increasing(n);
    decreasing(n);
    return 0;
}