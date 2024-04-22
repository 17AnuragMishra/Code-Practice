#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int count = 0;
    int sum = 0;
    while(n!=0){
        int ld = n%10;
        n = n/10;
        count++;
        sum+=ld;
    }
    printf("The no of digits are: %d", sum);
    return 0;
}