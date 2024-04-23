#include<stdio.h>
int maze(int cr, int cc, int er, int ec){ //////current row, current column, edge row, edge column
    int rightWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec) return 1;
    if(cr == er){//only right ways call
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){// only downwards call
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays += maze(cr,cc+1,er,ec);
        downWays += maze(cr+1,cc,er,ec);
    }
        int totalWays = rightWays + downWays;
        return totalWays;
}
int main(){
    int n, m;
    printf("Enter the number of row: ");
    scanf("%d", &n);
    printf("Enter the number of column: ");
    scanf("%d", &m);
    
    int noofways = maze(1,1,n,m);
    printf("%d", noofways); 
    return 0;
}