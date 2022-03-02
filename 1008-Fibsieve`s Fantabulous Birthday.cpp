#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j=0,n,m,a,b;
    cin>>n;
    while(n--){
        j++;
        cin>>a;
        ll sq=sqrt(a);
        if((sq*sq)!=a)sq++;
        ll max_value=sq*sq;
        ll mid_value=max_value-(sq-1);
        //cout<<sq<<" "<<mid_value<<endl;
        ll x,y;
        if(sq%2==0){
            if(a<mid_value){
                x=sq-(mid_value-a);
                y=sq;
            }
            else if(a==mid_value){
                x=sq;
                y=sq;
            }
            else{
                y=sq-(a-mid_value);
                x=sq;
            }
        }
        else{
            if(a>mid_value){
                x=sq-(a-mid_value);
                y=sq;
            }
            else if(a==mid_value){
                x=sq;
                y=sq;
            }
            else{
                y=sq-(mid_value-a);
                x=sq;
            }
        }
        cout<<"Case "<<j<<": ";
        cout<<x<<" "<<y<<endl;
    }
}