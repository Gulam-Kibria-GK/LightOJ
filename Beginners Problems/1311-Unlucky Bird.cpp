#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j=0,k,n;
    cin>>k;
    while(k--){
            j++;
        double v1,v2,v3,a1,a2;
        cin>>v1>>v2>>v3>>a1>>a2;
        double s1=(v1*v1)/(2*a1);
        double s2=(v2*v2)/(2*a2);
        double s3=v3*(max((v2/a2),(v1/a1)));
        cout<<"Case "<<j<<": ";
        printf("%.8lf %.8lf\n",s1+s2,s3);
    }
}
