#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;

ll lowerbound(ll x){
    ll b=0,e=v.size()-1;
    while(b<=e){
        ll mid=(b+e)/2;
        if(x>v[mid]){
            b=mid+1;
        }
        else if(x<=v[mid]){
            e=mid-1;
        }
    }
    return b;
}

int main()
{
    ll i,j,k=0,n,m,a,b;
    scanf("%lld",&a);
    while(a--)
    {
        k++;
        scanf("%lld%lld",&n,&m);
        for(i=0; i<n; i++)
        {
            scanf("%lld",&b);
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        ll x,y,f=0;
        printf("Case %lld:\n",k);
        while(m--)
        {
            scanf("%lld %lld",&x,&y);
            ll idx1=lowerbound(x);
            ll idx2=lowerbound(y);
            if(v[idx2]==y)idx2++;
            printf("%lld\n",(idx2-idx1));
        }
        v.clear();
    }
}
