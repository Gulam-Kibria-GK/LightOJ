#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll>mm,cnt;

int main()
{
    ll i,j=0,k,n,m,a,b;
    cin>>k;
    vector<ll>v;
    while(k--){
        cin>>n;
        j++;
        for(i=0;i<n;i++){
            cin>>a;
            cnt[a]++;
            if(mm[a]==0){
                v.push_back(a);
                mm[a]=1;
            }
        }
        cout<<"Case "<<j<<": ";
        n=v.size();
        ll ans=0;
        for(i=0;i<n;i++){
            ll kk=((cnt[v[i]])/(v[i]+1));
            if((cnt[v[i]])%(v[i]+1)){
                kk++;
            }
            ans+=(kk)*(v[i]+1);
        }
        cout<<ans<<endl;
        v.clear();
        cnt.clear();
        mm.clear();
    }
}

