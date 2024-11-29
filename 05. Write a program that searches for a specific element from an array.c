#include <stdio.h>
int main(){
int arr[100], i, n, search, count=0;
    printf("Enter any array aize: ");
    scanf("%d",&n);
    printf("Enter %d Array Element: ", n);
for(i=0;i<n;i++)
{
    scanf("%d", &arr[i]);
}
    printf("Enter the element you want to search for: ");
    scanf("%d", &search);
for(i=0;i<n;i++)
{
    if (arr[i]==search)
    {
        count=1;
        break;
    }
}
    if (count==1)
    {
        printf("Element Found\n");
    }
        else printf("Element is not Found\n");
   
    return 0;
}
