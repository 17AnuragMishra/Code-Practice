#include<stdio.h>
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a = 4;
    int b = 9;

    swap(&a, &b);
    printf("The value of A: %d\t", a);
    printf("The value of B: %d", b);
    return 0;
}