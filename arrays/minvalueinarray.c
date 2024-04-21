#include<stdio.h>
int main(){
    int arr[7] = {1,5,15,3,9,19,12};
    int min = arr[0];
    for (int i=0; i<=6;i++){
        if(min>arr[i]){
            min = arr[i];
        }

    }
    printf("%d", min);
    return 0;
}