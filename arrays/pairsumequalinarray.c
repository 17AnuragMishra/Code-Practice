#include<stdio.h>
int main(){
    int arr[7] = {1,5,7,3,9,4,6};
    int x = 10;
    int count = 0;
    for(int i=0;i<=6;i++){
        for (int j=i+1;j<=6;j++){
            if(arr[i] + arr[j] == x){ 
            count++;
            printf("(%d %d)\n", arr[i],arr[j]);
            }
        }   
    }    
    printf("%d", count);
    return 0;
}