#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;
    printf("%p\n", x); // to check the index of the stored value like '5' is stored in this one // p se address print hota hai
    printf("%p\n", &x);// to check the index of the pointer // ismein hum pointer ki address ya index dekh rhe & operator ka use karke
    printf("%d\n", *x);// agar humko pointer mein store variable ki value cahjiye to hum ye code karenge jaise idhar pe 5 store hai toh hum ye code karenge.
    return 0;
}