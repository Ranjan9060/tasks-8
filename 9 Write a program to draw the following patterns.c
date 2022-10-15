/*
1 2 3 4 3 2 1
  1 2 3 2 1 
    1 2 1
      1
*/

#include<stdio.h>
int main()
{
   
    int i,j,c,m;
    for(i=1;i<=4;i++)          
    {
        c=0;
        for(j=1;j<=7;j++)
        {
            
            if(j>=i && j<=8-i)
            {
                m=j<=4?c++:c--;
                
                
                 printf("%d",c);
            }
            
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}