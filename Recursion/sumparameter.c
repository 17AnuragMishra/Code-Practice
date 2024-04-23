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
void sum(int n, int s){
    if(n==0) {
        printf("%d", s);   
    }
    sum(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");\
    scanf("%d",&n);
    sum(n, 0);
    return 0;
}