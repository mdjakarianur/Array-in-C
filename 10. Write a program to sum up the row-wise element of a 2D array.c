#include<stdio.h>  
int main()
{  
int array[3][3],i,j,sum=0;  
    printf("Enter 3 by 3 array element: \n"); 
for (i=0;i<3;i++)
{ 
for (j=0;j<3;j++)
    { 
    scanf("%d", &array[i][j]);
    }
} 
    printf("\n"); 
for (i=0;i<3;i++)
{ 
    for(j=0;j<3;j++)
{ 
    printf("%d\t", array[i][j]); 
    sum=sum+array[i][j];
} 
    printf("Sum = %d\n", sum); 
    sum=0;
} 
return 0;
} 
