#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j=0,k,n,m;
    double r1,r2,r3,a,b,p,c;
    cin>>k;
    while(k--){
        j++;
        cin>>r1>>r2>>r3;
        cout<<"Case "<<j<<": ";
        a=r1+r2;
        b=r2+r3;
        c=r1+r3;
        p=a+b+c;
        double s=p/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        double cosc=acos((a*a+b*b-c*c)/(2*a*b));
        double cosa=acos((c*c+b*b-a*a)/(2*b*c));
        double cosb=acos((a*a+c*c-b*b)/(2*a*c));
        double ar1=.5*r1*r1*(cosb);
        double ar2=.5*r2*r2*(cosc);
        double ar3=.5*r3*r3*(cosa);
        printf("%.8lf\n",area-ar1-ar2-ar3);

    }

}
