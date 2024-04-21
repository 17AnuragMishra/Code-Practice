#include<stdio.h>
int main(){
    int num;
    printf("enter the number of elements: ");
    scanf("%d", &num);
    int arr[num]; /// or hum array ki size asise bhi declare kar sakte : int size =14, b[size]- 
    for(int i=0;i<=num;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=num;i>=0;i--){
        printf("%d ", arr[i]);
    }
    return 0;
}