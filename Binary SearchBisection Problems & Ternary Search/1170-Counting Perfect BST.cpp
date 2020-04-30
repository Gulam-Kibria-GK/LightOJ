#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll v[203800];
ll c=0;
ll fec[2000010];
ll cat[1000010];
ll mod = 100000007;

void perfect_powers(){
    for(ll i=2;i<100001;i++){
        ll j=2;
        while(true){
            ll value=powl(i,j);
            j++;
            if(value<=1e10+7){
                    v[c++]=value;
            }
            else break;
        }
    }
    sort(v,v+c);
    c = unique(v,v+c)-v;
    v[c++]=10000000100;
}

void fect()
{
    fec[0]=fec[1]=1;
    for(ll i=2;i<2000007;i++){
        fec[i]=(fec[i-1]*i)%mod;
    }
}

ll modMulInverse(ll n)
{
    ll res=1,y = mod-2,x=n;
    while (y > 0)
    {
        if (y & 1)
            res = ((res%mod)*(x%mod))%mod;
        y = y>>1;
        x = ( (x%mod)*(x%mod) )%mod;
    }
    return res;
}

void Catalan_number(){
    cat[0]=cat[1]=1;
    for(ll i=2;i<1000010;i++){
        ll value=(fec[2*i])%mod;
        ll tmp=(fec[i+1]*fec[i])%mod;
        tmp=modMulInverse(tmp);
        cat[i]=(value*tmp)%mod;
    }
}



int main()
{
    ll i,j=0,k,n,m,a,b;
    perfect_powers();
    fect();
    Catalan_number();
    cin>>k;
    while(k--){
        j++;
        cin>>n>>m;
        ll first=lower_bound(v,v+c,n)-v;
        ll last=upper_bound(v,v+c,m)-v;
        ll cnt=last-first;
        if(cnt<0)cnt=0;
        cat[0]=0;
        cout<<"Case "<<j<<": ";
        cout<<cat[cnt]<<endl;
    }
}
