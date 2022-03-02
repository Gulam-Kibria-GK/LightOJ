#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10000007
ll a,b,c,d,e,f,n;

void fun(ll n,ll arr[]){
    ll i;
    for(i=6;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6];
        arr[i]%=mod;
    }
}

int main()
{
    ll i,j,k;
    cin>>k;
    for(j=1;j<=k;j++){
        ll arr[100000];
        cin>>a>>b>>c>>d>>e>>f>>n;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        arr[3]=d;
        arr[4]=e;
        arr[5]=f;
        fun(n,arr);
        cout<<"Case "<<j<<": "<<(arr[n]%mod)<<endl;
    }
}
