#inlcude<stdio.h>
int main(){

  int n;
  printf("enter the number of rows and column: ");
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
