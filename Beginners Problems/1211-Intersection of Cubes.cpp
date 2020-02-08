#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j=0,n,m,a,b;
    cin>>a;
    while(a--){
        j++;
        cin>>n;
        ll x1,y1,z1,x2,y2,z2;
        ll x=9999,y=9999,z=9999,p=0,q=0,r=0;
        while(n--){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            x=min(x,x2);
            y=min(y,y2);
            z=min(z,z2);
            p=max(p,x1);
            q=max(q,y1);
            r=max(r,z1);
        }
        ll aa=x-p;
        ll bb=y-q;
        ll cc=z-r;
        ll ma=0;
        cout<<"Case "<<j<<": ";
        cout<<(max((aa*bb*cc),ma))<<endl;
    }
}
