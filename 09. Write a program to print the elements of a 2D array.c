#include<stdio.h>  
int main()
{  
int array[3][3],i,j;  
 printf("Enter 3 by 3 array element: \n"); 
for (i=0;i<3;i++)
{ 
    for (j=0;j<3;j++)
    { 
    scanf("%d", &array[i][j]);
    }
} 
for (i=0;i<3;i++)
{ 
    for(j=0;j<3;j++)
    { 
    printf("%d\t", array[i][j]);
    } 
    printf("\n");
} 
return 0;
}
