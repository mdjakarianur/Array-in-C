#include <stdio.h>
int main()
{
    int A[2][2]={{4,2},{3,9}};
    int B[2][2]={{5,6},{7,8}};
    int Add[2][2], Sub[2][2], Mul[2][2];
    int i,j,k;
        printf("Matrix Addition: \n");
    for (i=0; i<2; i++)
    {
        for (j=0;j<2; j++) 
        {
        Add[i][j] = A[i][j] + B[i][j];
        printf("%d ", Add[i][j]);
        }
        printf("\n");
    }
        printf("Matrix Subtraction: \n");
    for (i=0; i<2; i++)
    {
        for (j=0;j<2; j++)
        {
        Sub[i][j] = A[i][j] - B[i][j];
        printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }
        printf("Matrix Multiplication: \n");
    for (i=0; i<2; i++)
    {
        for (j=0;j<2; j++)
        {
            Mul[i][j] = 0;
        for (k=0; k<2; k++)
            {
        Mul[i][j] += A[i][k] * B[k][j];
            }
        printf("%d ", Mul[i][j]);
        }
        printf("\n");
    }
        return 0;
}
