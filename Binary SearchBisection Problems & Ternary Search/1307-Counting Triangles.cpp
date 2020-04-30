#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k=0,n,m,a,b;
    cin>>a;
    vector<ll>v;
    while(a--){
        k++;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>b;
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        ll ans=0,f=0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                ll value=v[i]+v[j];
                auto it=lower_bound(v.begin(),v.end(),value);
                ll dis=distance(v.begin(),it)-1;

                ans+=max(dis-j,f);
                //cout<<dis-j<<" "<<ans<<" "<<v[i]<<" "<<v[j]<<endl;
            }
        }
        printf("Case %lld: ",k);
        cout<<ans<<endl;
        v.clear();
    }
}
