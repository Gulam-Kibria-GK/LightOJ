/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,t,k,l,n,m,a,b;
    vector<ll>v;
    cin>>t;
    for(k=1;k<=t;k++){
        cin>>n;
        ll ans=0,c=0;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(v[j]>=v[i])c++;
                else break;
            }
            for(j=i-1;0<=j;j--){
                if(v[j]>=v[i])c++;
                else break;
            }
            //cout<<v[i]<<" "<<c<<endl;
            ans=max(ans,v[i]*c);
            c=0;
        }
        cout<<"Case "<<k<<": "<<ans<<endl;
        v.clear();
    }
}
