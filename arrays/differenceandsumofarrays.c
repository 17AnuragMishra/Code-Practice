#include<stdio.h>
int main(){
    int arr[7] = {1,5,15,3,9,19,12};
    int sum_even = 0;
    int sum_odd = 0;

    for (int i=1;i<=6;i++){
        if(i%2!=0){
            sum_odd+=arr[i];        
        }else{
            sum_even+=arr[i];
        }
    }
    int diff = sum_even - sum_odd;
    printf("%d", diff);
    return 0;
}