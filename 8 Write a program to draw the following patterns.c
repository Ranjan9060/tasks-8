/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
#include<stdio.h>
int main()
{
   
    int i,j,c,m;
    for(i=1;i<=4;i++)          
    {
        c=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                m=j<4?c++:c--;
                 printf("%d",m);
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