#include<stdio.h>
void main()
{
    int r,i,j,n,sum=0;
    printf("enter the size of rows");
    scanf("%d",&r);

    
    

    
    int arr[r][r];

    for (i=0;i<r;i++)
    {
        /* code */
        for (j=0;j<r;j++)
        {
            /* code */
           
            scanf("%d",&arr[i][j]);

        }
        
    }
    if(j>=i)
    {
        sum=sum+arr[i][j];

    }
    if(sum==0)
    printf("lowertriangulAR");
    else
    printf("not");
    
}