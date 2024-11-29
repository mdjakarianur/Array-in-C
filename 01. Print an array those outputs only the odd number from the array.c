#include <stdio.h> 
int main(){ 
int i, n; 
  printf("Enter any array size: "); 
  scanf("%d", &n); 
int arr[n]; 
  printf("Enter %d Numbers: ", n); 
for(i=0;i<n;i++)
{ 
  scanf("%d",&arr[i]);
} 
  printf("Odd Numbers in Array are: "); 
for(i=0;i<n;i++)
{ 
if(arr[i]%2!=0) 
  printf("%d ",arr[i]);
} 
return 0;
} 
