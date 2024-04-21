#include<stdio.h>
int main(){
    int arr[5];

    for (int i=0;i<=4;i++){
        // int a = i+1;
        printf("Enter the element: %d\n", i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d", arr[2]);
    return 0;
}