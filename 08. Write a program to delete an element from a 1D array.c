#include <stdio.h>
int main()
{
    int arr[100],i,n,position;
        printf("Enter any array aize: ");
        scanf("%d", &n);
        printf("Enter %d Array Element: ", n);
for(i=0;i<n;i++)
{
        scanf("%d", &arr[i]);
}
        printf("Enter which position you want to delete: ");
        scanf("%d", &position);
for(i=position-1;i<=n-2;i++)
{
    arr[i]=arr[i+1];
}
        arr[n-1]=0;
        printf("Deletion: ");
for(i=0;i<n-1;i++)
{
        printf("%2d ", arr[i]); 
}
    return 0;
}
