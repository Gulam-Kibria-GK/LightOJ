#include<bits/stdc++.h>
using namespace std;

#define ll long long


double ter_search(double l,double w,double h)
{
    ll i,j,k;
    double area1,area2;
    double s=0,e=h;
    double h1,h2;
    ll c=2000;
    while(c--){
        //h1=s + (e-s)/3.0;
        //h2=e -  (e-s)/3.0;
        h1= (2.0*s+e)/3.0;
        h2= (s+2.0*e)/3.0;
        area1=(l-(2.0*h1))*(w-(2.0*h1))*h1;
        area2=(l-(2.0*h2))*(w-(2.0*h2))*h2;
        if(area1>area2){
            e=h2;
        }
        else{
            s=h1;
        }
    }
    return (abs(area1+area2))/2;
    //return area1;
}

int main()
{
    ll i,j=0,k;
    cin>>k;
    while(k--){
        j++;
        double w,l;
        cin>>l>>w;
        double h=min(l,w);
        //if(l==w)
        h/=2;
        double ans=ter_search(l,w,h);
        cout<<"Case "<<j<<": ";
        printf("%.10lf\n",ans);
    }
}
