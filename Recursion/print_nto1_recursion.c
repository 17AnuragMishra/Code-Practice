#include<stdio.h>
void numbers(int n){
    if(n==0) return;
    printf("%d ", n);
    numbers(n-1);
    return;

}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);    
    numbers(n);
    return 0;
}