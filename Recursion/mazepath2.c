#include<stdio.h>
int maze2(int n, int m){
    int rightWays = 0, downWays = 0;
    if (n==1 && m==1) return 1;
    if (n==1){
        rightWays += maze2(n, m-1); 
    }
    if(m==1){    
        downWays += maze2(n-1, m); 
    }
    if(n>1 && m>1){
        rightWays += maze2(n,m-1);
        downWays += maze2(n-1,m);
    }
    int sum = rightWays + downWays;
    return sum;
}
int main(){
    int n, m;
    printf("Enter the number of row: ");
    scanf("%d", &n);
    printf("Enter the number of column: ");
    scanf("%d", &m);
    
    int noofways = maze2(n,m);
    printf("%d", noofways); 
    return 0;
}