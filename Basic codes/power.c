#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    int power = 1;
    for(int i=0; i<b; i++){

        power*=a;
    }
    printf("the power of %d is : %d", a, power);
}