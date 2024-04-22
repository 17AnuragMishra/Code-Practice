/*#include <stdio.h>
int main(){
    int n;
    int sum_even = 0, sum_odd = 0, final_sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        if(i%2 == 0) sum_even+=i;
        if(i%2!=0) sum_odd+=i;
    }
    final_sum = sum_odd - sum_even;
    printf("Final sum: %d", final_sum);
        return 0;

}*/
#include <stdio.h>
int main(){
    int n; 
    printf("Enter the the number: ");
    scanf("%d", &n);
    int sum = 0;
    {
        if(n%2==0){
            sum = -n/2;
        }
        else{
            sum = -n/2 +n;
        }
    printf("sum: %d", sum);
    }
    
    
    return 0;
}
