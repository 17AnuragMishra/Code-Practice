#include<stdio.h>
int fibo(int n){
    if (n==1 || n==2) return 1;
    int one = fibo(n-1);
    int two = fibo(n-2);
    int ans = one + two;
    return ans;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf("%d",fibo(n));   
    return 0;
}