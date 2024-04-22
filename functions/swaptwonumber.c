// #include<stdio.h>
// int main(){
//     int a, b, temp;
//     printf("Enter the no a: ");
//     scanf("%d", &a);
//     printf("Enter the no b: ");
//     scanf("%d", &b);
//     temp = a;
//     a = b;
//     b = temp;

//     printf("a = %d\t b = %d", a,b);
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int a, b;
//     printf("Enter the number A: ");
//     scanf("%d", &a);
//     printf("Enter the number B: ");
//     scanf("%d", &b);

//     a = a+b;
//     b = a-b;
//     a = a-b;

//     printf("tthe values are:-\n a = %d\t b = %d", a, b);
//     return 0;
// }

/////////////////////Using functions////////////////////

#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return; 
     
}
int main(){
    int a, b;
    printf("Enter the number A: ");
    scanf("%d", &a);
    printf("Enter the number B: ");
    scanf("%d", &b);
    
    swap(a,b);
    return 0;
}