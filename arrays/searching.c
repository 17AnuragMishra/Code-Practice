#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {12,71,37,62,18,57};
    int x = 27;
    bool flag = false;
    for (int i=0;i<=6;i++){
        if(arr[i]==x){
            printf("");
            break;
        }
    }
    return 0;
}