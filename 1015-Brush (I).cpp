#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10000007
ll a,b,ans=0,c,d,e,f,n;

int main()
{
    ll i,j;
    cin>>a;
    for(i=1;i<=a;i++){
        ans=0;
        //cout<<endl;
        cin>>n;
        while(n--){
            cin>>b;
            if(b>0)ans+=b;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
