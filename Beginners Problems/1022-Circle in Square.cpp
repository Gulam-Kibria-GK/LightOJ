#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double ans,x,y,f,pi=2*acos(0.0);

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>f;
        ans=pi*f*f;
        x=2*2*f*f;
        y=x-ans;
        printf("Case %d: %.2f\n",i,y);
    }
    return 0;
}
