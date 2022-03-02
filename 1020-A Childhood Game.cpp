#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j=0,k,n,m,a,b,c,d;
    cin>>k;
    while(k--){
        j++;
        string st;
        cin>>n>>st;
        n%=3;
        cout<<"Case "<<j<<": ";
        if(st[0]=='A'){
            if(n==1){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
        else{
            if(n==0){
                cout<<"Alice"<<endl;
            }
            else{
                cout<<"Bob"<<endl;
            }
        }
    }
}
