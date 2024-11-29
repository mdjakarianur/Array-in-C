// https://www.beecrowd.com.br/judge/en/problems/view/1172

#include <stdio.h> 
int main()
{ 
   int i,n[10]; 
   for(i=0; i<10; i++)
   { 
         scanf("%d",&n[i]); 
      if(n[i]<=0) 
         n[i] = 1;
   } 
    for(i=0; i<10; i++)
       {
        printf("X[%d] = %d\n",i,n[i]);
       }
    return 0;
}
