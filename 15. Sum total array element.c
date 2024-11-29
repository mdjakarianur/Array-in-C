#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a array: ");
    scanf("%d",&n);
    int arr[n];
        printf("Enter %d element: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d ",sum);
    return 0;
}


