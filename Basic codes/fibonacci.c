//fibonacci series for n terms.
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = 1,b = 1, fibo = 0;
    for(int i=1; i<=n-2; i++){
        fibo = a + b;
        a = b;
        b = fibo;    
    }
    printf("%d", fibo);
    return 0;
}*/

//Fibonacci series for first n terms.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = 1, b = 1, sum = 0;
    printf("The 1 term of a fabonacci series is: %d", a);
    printf("\nThe 2 term of a fabonacci series is: %d", b);
    for (int i=3; i<=n; i++){
        sum = a +b;
        a=b;
        b=sum;
        printf("\nThe %d term of a fibonacci series is: %d ",i, sum); 
    }
    return 0;
}