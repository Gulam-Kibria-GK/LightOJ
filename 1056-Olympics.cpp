#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii acos(-1.0)
#define db double

void Binary_search(db a,db b,ll j){
    double h,w,r,s,total_s,mid,start,endd;
    start=0.0;
    endd=400.0;
    double ans_h,ans_w;
    while(abs(start-endd)>=.000000001){
        mid=(start+endd)/2;
        //cout<<start<<" "<<endd<<endl;
        h=mid;
        w=(h*b)/a;
        r=(sqrt((h*h)+(w*w)))/2;
        s=r*(acos((r*r+r*r-w*w)/(2*r*r)));//theta*r;
        total_s=2*(s+h);
        if(total_s<=400){
            start=mid;
            ans_h=h;
            ans_w=w;
        }
        else{
            endd=mid;
        }
    }
    cout<<"Case "<<j<<": ";
    cout<<fixed<<setprecision(8)<<ans_h<<" "<<ans_w<<endl;
}


int main()
{
    ll i,j=0,k,n;
    cin>>k;
    while(k--){
        j++;
        double n,m;
        char ch;
        cin>>n;
        getchar();
        cin>>ch>>m;
        Binary_search(n,m,j);
    }
}
