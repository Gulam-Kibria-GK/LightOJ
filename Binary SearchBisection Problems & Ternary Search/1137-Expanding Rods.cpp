#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define no(j) cout<<"Case "<<j<<": "
const double diff=1e-9;

double solve_1(double l,double n,double c){
    return (l*(1+(n*c)));
}

double theta(double c1,double b){
    return (((c1*c1)/(2*b))+(b/2));
}

double solve_2(double h,double l){
    double b,c1,s,r;
    b=h;
    c1=l/2;
    r=theta(c1,b);
    s=r*2*(asin((c1/r)));
    return s;
}

double bin(double l,double n,double c){
    double b,e,mid;
    b=0.0;
    e=l;
    double old_l=solve_1(l,n,c);
    //cout<<abs(e-b)<<endl;
    for(int i=0;i<60;i++){
        mid=(b+e)/2;
        double new_l=solve_2(mid,l);
        //cout<<old_l<<" "<<new_l<<endl;
        if(old_l==new_l){
            return mid;
        }
        else if(new_l>old_l){
            e=mid;
        }
        else{
            b=mid;
        }
    }
}


int main()
{
    ll i,k,j=0,n;
    cin>>k;
    while(k--){
        j++;
        double l,n,c;
        cin>>l>>n>>c;
        double ans=bin(l,n,c);
        no(j);
        printf("%.9lf\n",ans);
    }
}

