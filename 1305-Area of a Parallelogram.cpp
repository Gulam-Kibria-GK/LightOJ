#include<bits/stdc++.h>
using namespace std;

#define ll long long

map<ll,ll>mm;
vector<ll>v,v2;

int main(){
    ll i=0,j,k,l,n,m,a1,a2,b1,b2,c1,c2,x1,x2,d1,d2;
    cin>>n;
    while(n--){
        i++;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        d1=a1+c1-b1;
        d2=a2+c2-b2;
        ll area=((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2))-((a2*b1)+(b2*c1)+(c2*d1)+(d2*a1));
        cout<<"Case "<<i<<": "<<d1<<" "<<d2<<" "<<abs(area/2)<<endl;
    }
}
/**
Case 1: 0 10 100

Case 2: 0 -20 200

Case 3: -32 9 1247
**/
