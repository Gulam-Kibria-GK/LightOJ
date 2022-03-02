#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define CASE_PRINT(j)   cout<<"Case "<<j<<": "
ll mx=1000000000000;
vector<ll>v,lucky;
map<ll,ll>mm;
int cnt=0;
void func(ll n)
{
    if(n>mx) return;
    if(n!=0)
        v.push_back(n);
    func(n*10+4);
    func(n*10+7);
}


void solve(int idx,ll num){
    if(idx>=v.size())return;
    for(int i=idx;i<v.size();i++){
        ll ans=num*v[i];
        if(ans<=0 || ans>=mx)return;
        if(mm[ans]==0){
            lucky.push_back(ans);
            mm[ans]=1;
        }
        solve(i,ans);
    }
}

ll lowerbound(ll x){
    ll b=0,e=lucky.size()-1;
    while(b<=e){
        ll mid=(b+e)/2;
        if(x>lucky[mid]){
            b=mid+1;
        }
        else if(x<=lucky[mid]){
            e=mid-1;
        }
    }
    return b;
}




int main()
{
    func(0);
    ll i,j=0,k,n,m,a,b;
    //cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    solve(0,1);
    //cout<<lucky.size()<<endl;
    sort(lucky.begin(),lucky.end());
    cin>>n;
    while(n--){
            j++;
        cin>>a>>b;
        ll r=upper_bound(lucky.begin(),lucky.end(),b)-lucky.begin();
        //ll r=upwerbound(b);
        ll l=lowerbound(a);
        CASE_PRINT(j);
        cout<<r-l<<endl;
    }
}
