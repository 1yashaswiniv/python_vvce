#include<stdio.h>
int main()
{
    int N=10,k=5,n;
    printf("enter input");
    scanf("%d",&n);
    if(n>N||n<=0)
    {
        printf("invalid input\n");
    printf("number of candies remaining %d",N);
    }
    else
    {
    printf("number of candies sold %d\n",n);
printf("number of candies remaining %d",N-n);
}
return 0;
}