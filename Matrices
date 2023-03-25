#include<stdio.h>
int main(void)
{
    int i, j, k, p, q, m = 0, n = 0, final = 0;
    int fst[m][n], sec[m][n], mul[m][n];

    printf(" Write the number of rows and columns for first matrix \n ");
    scanf("%d%d", &m, &n);

    printf(" Insert your matrix elements : \n ");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &fst[i][j]);
        }

    printf(" Write the number of rows and columns for second matrix\n");
    scanf(" %d %d", &p, &q);

    if (n != p)
        printf(" Matrices cannot be multiplied with each other. \n ");
    else
    {
        printf(" Insert your elements for second matrix \n ");

        for (i = 0; i < p; i++)
            for (j = 0; j < q; j++)
                scanf("%d", &sec[i][j] );

        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                for (k = 0; k < p; k++) {
                    final = final + fst[i][k] * sec[k][j];
                }
                mul[i][j] = final;
                final = 0;
            }
        }

        printf(" Matrix multiplication or product of the matrices is: \n ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++)
                printf("%d \t", mul[i][j] );
            printf(" \n ");
        }
    }
    return 0;
}
