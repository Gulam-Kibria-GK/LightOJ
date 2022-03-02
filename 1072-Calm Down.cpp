#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii acos(-1.0)
#define db double

double Binary_search(db R,db n){
    double rate,rate1,r,mid,start,endd;
    start=0.0;
    endd=R;
    double ans_h,ans_w;
    rate=sin(pii/n);
    while(abs(start-endd)>=.000000001){
        mid=(start+endd)/2;
        //cout<<start<<" "<<endd<<endl;
        r=mid;
        rate1=(r/(R-r));
        if(abs(rate-rate1)<.00000001){
            return r;
        }
        else if(rate1<rate){
            start=mid;
        }
        else{
            endd=mid;
        }
    }
}


int main()
{
    ll i,j=0,k,n;
    cin>>k;
    while(k--){
        j++;
        double n,m;
        char ch;
        //cin>>n;
        //getchar();
        cin>>n>>m;
        double ans=Binary_search(n,m);
        cout<<"Case "<<j<<": ";
        cout<<fixed<<setprecision(8)<<ans<<endl;
    }
}
