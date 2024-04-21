#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,5,15,3,9,19,12};
    int min = INT_MAX;
    for (int i=0; i<=6;i++){
        if(min>arr[i]){
            min = arr[i];
        }

    }
    printf("%d", min);
    return 0;
}