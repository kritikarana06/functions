#include<stdio.h>
void main()
{
    int i,j,k,u=8,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=u;k>=1;k--)
        {
            printf(" ");

        }
        for(l=i;l>=1;l--){
            printf("%d",l);
        }
        printf("\n");
        u=u-2;
    }
}