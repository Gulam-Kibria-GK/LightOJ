#include<cstdio>
int main()
{
    int T,a,b,nl=1;
    long long i,ans=0,sum=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&a,&b);
        a--;
        sum=a/3*2;
        if(a%3==2)
            sum++;
        ans=b/3*2;
        if(b%3==2)
            ans++;
            ans-=sum;
        printf("Case %d: %lld\n",nl++,ans);
    }
}
