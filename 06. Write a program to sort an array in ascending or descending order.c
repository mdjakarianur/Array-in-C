#include <stdio.h>
int main(){
    int arr[100],i,j,n,temp=0;
        printf("Enter any array aize: ");
        scanf("%d", &n);
        printf("Enter %d Array Element: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
        for(i=0;i<n;i++){
            for(j=i+1; j<n; j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
            printf("Ascending order: \n");
        for(i=0;i<n;i++){
            printf("%2d", arr[i]); 
        }
    return 0;
}
