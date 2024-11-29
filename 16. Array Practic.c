#include<stdio.h> 
int main() 
{ 
int arr[6]={23,12,18,7,34,15}; 
int i,j,temp=0; 
for (i =0; i<6; i++){ 
for (j=i+1; j<6; j++) 
{ 
    		  if ( arr[i]>arr[j]) 
    		{ 
        	temp = arr[i]; 
       	arr[i]= arr[j]; 
         arr[j]= temp; 
    	} 
    } 
} 
    printf("Sorted array: "); 
for (i =0; i<6; i++) 
   { 
    	printf("%d ",arr[i]); 
} 
printf("\n"); 
int max = arr[0]; 
for (i = 0; i<6; i++) 
 { 
    		if (arr[i]>max) 
    	{ 
        max = arr[i]; 
    } 
} 
printf("Highest element: %d\n",max); 
int mid1 = arr[(6/2)-1]; 
int mid2 = arr[6/2]; 
printf("Middle elements of sorted array:%d %d",mid1,mid2); 
}
