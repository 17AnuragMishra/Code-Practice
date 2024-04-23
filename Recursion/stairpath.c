#include<stdio.h>
int stair(int n){
    if(n==2 || n==1) return n;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d",stair(n));   
    return 0;
}