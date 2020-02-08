#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii acos(-1.0)

double dis(double x1,double y1,double x2,double y2){
    double aa=abs(x1-x2);
    double bb=abs(y1-y2);
    return (sqrt((aa*aa)+(bb*bb)));
}
int main()
{
    ll i=0,t;
    cin>>t;
    while(t--){
        i++;
        double ox,oy,ax,ay,bx,by;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        double B=dis(ox,oy,ax,ay);
        double A=dis(ox,oy,bx,by);
        double C=dis(ax,ay,bx,by);
        //cout<<A<<" "<<B<<" "<<C<<endl;
        double area=pii*B*B;
        double theta=acos(((A*A)+(B*B)-(C*C))/(2*A*B));
        //cout<<area<<" "<<theta<<endl;
        double ar1=.5*B*B*theta;
        double rate=area/ar1;
        double ans=(2*pii*B)/rate;
        printf("Case %lld: ",i);
        printf("%.4lf\n",ans);
    }
}
