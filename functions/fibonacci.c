#include<stdio.h>
void fibonacciSeries(int n)
{
   int a=0, b=1, sum;
   for(int i=0; i<n; i++)
   {
     printf("%d", a);
     sum = a+b;
     a = b;
     b = sum;
   }
}
int main()
{
   int term;
   printf("Enter the term: ");
   scanf("%d", &term);
   printf("The fibonacci series is: \n");
   fibonacciSeries(term);
   return 0;
}