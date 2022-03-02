#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j=0,k,n,m,a;
    cin>>k;
    while(k--){
        j++;
        cin>>n>>m;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        ll pos=0,neg=0,total;
        for(i=0;i<n;i++){
            pos+=(v[i]*(n-i-1));
            neg+=(v[i]*i);
        }
        neg=(-1)*(neg);
        //cout<<pos<<" "<<neg<<endl;
        //cout<<(pos+neg)<<endl;
        total=pos+neg;
        ll x,y,z;
        cout<<"Case "<<j<<":"<<endl;
        for(i=0;i<m;i++){
            cin>>x;
            if(x==0){
                cin>>y>>z;
                pos=pos-(v[y]*(n-y-1));
                neg=neg+(v[y]*y);
                v[y]=z;
                pos=pos+(v[y]*(n-y-1));
                neg=neg-(v[y]*y);
                total=pos+neg;
            }
            else{
                cout<<total<<endl;
            }
        }
    }
}
