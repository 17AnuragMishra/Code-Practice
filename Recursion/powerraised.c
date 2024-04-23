#include<stdio.h>
int power(int a, int b){
    if(b==0) return;
    int ans = a*power(a, b-1);
    return ans; 
}
int main(){
    int a, b;
    printf("enter the base: ");
    scanf("%d", &a);
    printf("enter the power: ");
    scanf("%d", &b);

    int p = power(a,b);
    printf("%d raised to the power %d is %d",a ,b, p);   
    return 0;
}