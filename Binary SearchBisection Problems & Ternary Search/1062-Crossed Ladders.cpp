#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii acos(-1.0)
#define db double

double Binary_search(db x,db y,db h){
    double h1,h2,d,mid,start,endd,rate,rate1;
    start=0.0;
    endd=min(x,y);
    rate=(1.0/h);
    while(abs(start-endd)>=.00000001){
        mid=(start+endd)/2;
        d=mid;
        h1=sqrt((x*x)-(d*d));
        h2=sqrt((y*y)-(d*d));
        rate1=(1/h1)+(1/h2);
        if(abs(rate-rate1)<0.00000001){
            return d;
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
        double n,m,a;
        cin>>n>>m>>a;
        double ans=Binary_search(n,m,a);
        cout<<"Case "<<j<<": ";
        cout<<fixed<<setprecision(8)<<ans<<endl;
    }
}
