#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii acos(-1.0)
int main()
{
    ll i,j=0,k,n,m,r1,r2,h,a;
    double p;
    cin>>k;
    while(k--){
    	j++;
    	cout;
    	cin>>r1>>r2>>h>>p;
    	n=r1-r2;
    	double aa=(1.0*n)/h;
    	double bb=(r2+aa*p);
    	double ans=pii*(p/3)*(bb*bb+bb*r2+r2*r2);
    	printf("Case %lld: %.9lf\n",j,ans);
    }
}
