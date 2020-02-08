#include<bits/stdc++.h>
using namespace std;
#define pii acos(-1.0)

#define ll long long

double ans(double r,ll n){
    double lf=sin(pii/n);
    double ans=(lf*r)/(1+lf);
    return ans;
}

int main()
{
    ll i,j,k=0,n,m,a;
    cin>>j;
    while(j--){
        k++;
        double p;
        cin>>p>>n;
        cout <<"Case "<<k<<": ";
        printf("%.10lf\n",(ans(p,n)));
    }
}
