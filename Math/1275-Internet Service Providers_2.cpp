#include<bits/stdc++.h>
using namespace std;

#define ll long long

double tar_search1(double n,double m){
    ll i,j;
    double k=0;
    double mid,l=0,r=1e10,l1,l2,value,value1;
    for(i=0;i<20000;i++){
        double l1=l + (r-l)/3.0;
        double l2=r -  (r-l)/3.0;
        value=max((l1*(m-(l1*n))),k);
        value1=max((l2*(m-(l2*n))),k);
        if(value>=value1){
            r=l2;
        }
        else l=l1;
    }
    return l;
}


int main()
{
    ll i,j=0,k;
    double n,m;
    cin>>k;
    while(k--){
        j++;
        cin>>n>>m;
        cout<<"Case "<<j<<": ";
        if(n==0 || n>m){
            cout<<0<<endl;
            continue;
        }
        double ans=tar_search1(n,m);
        double a=floor(ans);
        double b=ceil(ans);
        double value=a*(m-(a*n));
        double value1=b*(m-(b*n));
        if(value>=value1){
            cout<<((ll)(a))<<endl;
        }
        else{
            cout<<((ll)(b))<<endl;
        }
    }
}


//http://nstu-coding-planet.blogspot.com/2017/10/lightoj-1275-internet-service-providers_22.html
