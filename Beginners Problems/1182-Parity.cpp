#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10000007
ll a,b,ans=0,c,d,e,n,m;


int main()
{
    ll i,j,k;
    cin>>a;
    for(i=1; i<=a; i++)
    {
        cin>>k;
        ll ch=0;
        while(k!=0)
        {
            if(k%2)
                ch++;
            k/=2;
        }
        if(ch%2)
            cout<<"Case "<<i<<": odd"<<endl;
        else
        {
            cout<<"Case "<<i<<": even"<<endl;
        }
    }
}
