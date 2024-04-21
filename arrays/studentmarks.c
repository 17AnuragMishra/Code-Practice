#include<stdio.h>
int main(){
    int arr[5] = {45,55,68,32,40};
    for (int i=0;i<=4;i++){
        if(arr[i]<=35) printf("%d ", i);
    }

    return 0;
}