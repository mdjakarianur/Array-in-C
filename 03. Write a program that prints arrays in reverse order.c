#include <stdio.h>  
int main(){  
int i,n;  
    printf("Enter any array size: ");  
    scanf("%d",&n);  
int arr[n];  
    printf("Enter %d Numbers: ",n);  
for(i=0; i<n; i++)
{  
    scanf("%d",&arr[i]);
} 
    printf("Revesed Element: "); 
for(i=n-1; i>=0; i--)
    { 
    printf("%d ", arr[i]);
    }  
return 0;
} 
