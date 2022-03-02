#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,d;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        d=((abs(b-a)*4+11)+a*4+8);
        printf("Case %d: %d\n",i,d);
    }
}
