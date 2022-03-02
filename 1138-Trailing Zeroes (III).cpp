#include<bits/stdc++.h>
using namespace std;
#define no(j) cout<<"Case "<<j<<": "

#define ll long long

ll zero(ll x)
{
    ll k,l=1,m;
    ll sum=0;
    while(true)
    {
        if((powl(5,l))>x)
        {
            return sum;
        }
        sum+=(x/(powl(5,l)));
        l++;
    }
}

ll solve(ll n)
{
    ll i,j,l=0,e=900000000,mid;
    ll ans=-1;
    while(l<=e)
    {
        mid=(l+e)/2;
        ll zro=zero(mid);
        //cout<<zro<<" "<<mid<<endl;
        if(zro==n)
        {
            ans=mid;
            e=mid-1;
        }
        else if(zro>n)
        {
            e=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}

int main()
{
    ll i,j=0,k,n,m,a;
    cin>>k;
    while(k--)
    {
        j++;
        cin>>n;
        no(j);
        ll ans=solve(n);
        if(ans==-1)
        {
            cout<<"impossible"<<endl;
        }
        else
            cout<<ans<<endl;
    }

}
