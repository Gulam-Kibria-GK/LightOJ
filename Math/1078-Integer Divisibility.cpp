#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll i,k,l,j=0,n,m,a,b;
     cin>>k;
     while(k--){
        j++;
        cin>>n>>m;
        unsigned ll value=m;
        l=0;
        cout<<"Case "<<j<<": ";
        while(true){
            l++;
            if(value%n==0){
                cout<<l<<endl;
                break;
            }
            value=(value*10)%n+m%n;
            //cout<<value<<endl;
        }
     }
}
