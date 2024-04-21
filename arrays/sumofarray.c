#include<stdio.h>
int main(){
    int arr[5] = {5,1,2,4,3}, i; 
    int sum = 0;
    for (i = 0;i<=4;i++){
        sum = sum + arr[i]; 
    }
    printf("%d", sum);
    return 0;
}