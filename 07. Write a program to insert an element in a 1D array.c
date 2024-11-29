#include <stdio.h>
int main()
{
    int arr[100],i,n,position,value;
        printf("Enter any array aize: ");
        scanf("%d", &n);
        printf("Enter %d Array Element: ", n);
    for(i=0;i<n;i++)
{
        scanf("%d", &arr[i]);
}
        printf("Enter which position you want to insert: ");
        scanf("%d", &position);
        printf("Enter the value you want to insert: ");
        scanf("%d", &value);
    for(i=n;i>=position;i--)
    {
            arr[i]>arr[i-1];
    }
           arr[position-1]=value; 
           printf("Insertion: ");
    for(i=0;i<n+1;i++)
    {
        printf("%d ", arr[i]); 
    }
    return 0;
}
