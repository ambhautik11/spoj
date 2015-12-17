#include<stdio.h>
int main(void )
{
        int t, n , m ,i,j,k;
        int a[100000];
        scanf("%d",&t);
        for( i=1;i<=t;i++)
        {
            scanf("%d",&m);
            fflush(stdin);
            scanf("%d",&n);
            if(n<m) continue;
            for(j=0;j<n+1;j++)
            {
              //  printf("1 ");
                a[j]=1;
            }
            a[0]=a[1]=0;
            for(j=2 ; j<n;j++)
            {
                if (a[j]==1)
                {
                    for( k=2;j*k <n+1;k++)
                        a[j*k]=0;
                }
            }
            for(k=m;k<n+1;k++)
            {
                if(a[k]==1) printf("\n %d",k);
            }
            printf("\n");
        }
        return 0;
}
