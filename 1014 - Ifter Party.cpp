/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,p,i,l,x,f,ans,j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld",&p,&l);
        ans=p-l;
        x=(int)sqrt(ans);
        ll a[100000],k=-1;
        for(j=1; j<=x; j++)
        {
            if(ans%j==0)
            {
                k++;
                a[k]=j;
                if(ans/j!=j)
                {
                    k++;
                    a[k]=ans/j;
                }
            }
        }
        sort(a,a+(k+1));
        printf("Case %lld: ",i);
        f=0;
        for(j=0;j<=k;j++)
        {
            if(a[j]>l)
            {
                f=1;
                printf("%lld",a[j]);
                if(j!=k)
                    printf(" ");
                    if(j==k)
                        printf("\n");
            }
        }
        if(f!=1)
        {
            printf("impossible\n");
        }
    }
    return 0;
}
