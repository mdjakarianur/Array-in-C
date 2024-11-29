#include <stdio.h> 
int main(){ 
int i,n,sum=0; 
  printf("Enter any array size: "); 
  scanf("%d",&n); 
int arr[n]; 
  printf("Enter %d Numbers: ", n); 
for(i=0; i<n; i++)
{ 
  scanf("%d", &arr[i]);
}
for(i=0; i<n; i++)
{ 
if(arr[i]%2==0) 
  sum=sum+arr[i];
} 
  printf("Total Sum of Even values is: %d ",sum); 
return 0;
} 
