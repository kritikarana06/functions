#include<stdio.h>
int fact(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++){
    factorial=factorial*i;
    }
    return (factorial);


}
int main()
{
    int n,factorial;
    printf("enter the value of n\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("%d\n",factorial);
    return 0;

}
