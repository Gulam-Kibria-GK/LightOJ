#include<bits/stdc++.h>
using namespace std;

#define ll long long
const double diff=1e-8;

double ab,ac,bc,abc,ad,ae,de,ade,bdec,rate;

double area(double a,double b,double c){
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double check(double mid){
    ad=mid;
    ae=(ad*ac)/ab;
    de=(ad*bc)/ab;
    ade=area(ad,ae,de);
    bdec=abc-ade;
    return (ade/bdec);
}

double b_search(){
        double l,r,mid,gd;
        l=0.0,r=ab;
        while(l<=r){
            mid=(l+r)/2.0;;
            double new_rate=check(mid);
            if(abs(new_rate-rate)<=diff){
                return mid;
            }
            else if((new_rate-rate)<0){
                l=mid;
            }
            else if((new_rate-rate)>0){
                r=mid;
            }
        }
}

int main()
{
    ll i,j=0,k,n;
    cin>>n;
    while(n--){
        ab=ac=bc=abc=ad=ae=de=ade=bdec=rate=0;
        j++;
        cin>>ab>>ac>>bc>>rate;
        abc=area(ab,ac,bc);
        double ans=b_search();
        cout<<"Case "<<j<<": ";
        printf("%.8lf\n",ans);
    }
}
