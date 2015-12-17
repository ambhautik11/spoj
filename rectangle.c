#include<stdio.h>
#include<math.h>
int main(void)
{
    long long int n,i,a=0,k;
    scanf("%lld",&n);
    a=n;
    for(k=2;k*k<=n;k++)
    for(i=k*k ;n/i>=1 ;i+=k)
    {
        a++;
    }
    printf("\n%lld",a);
    return 0;
}
