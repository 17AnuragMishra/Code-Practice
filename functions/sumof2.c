#include<stdio.h>
int add(int a, int b){
       return a+b;
       
}

int main(){
    int a, b, sum;
        printf("Enter the number 'a': ");
        scanf("%d", &a);
        printf("Enter the number 'b': ");
        scanf("%d", &b);
        sum = add(a,b);
        printf("%d",sum);
    return 0;

}