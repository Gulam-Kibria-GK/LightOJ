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

//..........collected geeksforgeeks...........//

ll slove(ll n){
    ll a = 1;
    while(n%2==0){
        n/=2;
    }
    for(ll i=3; i*i<=n; i+=2){
        ll c = 0;
        while(n%i==0){
            n/=i;
            c++;
        }
        a=a*(c+1);
    }
    if(n>2)
        a=a*2;
    return a-1;
}

int main()
{
    ll i,j,k,l,n,m;
    cin>>k;
    for(j=1; j<=k; j++)
    {
        cin>>n;
        ll ans=slove(n);
        cout<<"Case "<<j<<": "<<ans<<endl;
    }
}
