#include <stdio.h>  
int main(){  
int i, n;  
    printf("Enter any array size: ");  
    scanf(“%d”,&n); 
int arr[n];  
    printf("Enter %d Numbers: ", n);  
for(i=0; i<n; i++)
{  
    scanf("%d", &arr[i]);
}  
    printf("The maximum numbers are: ");  
int max = arr[0];  
for(i=1; i<n; i++)
{  
if(arr[i] > max)
    {
     max=arr[i];
    }
}  
    printf("%d", max);  
return 0;
}
