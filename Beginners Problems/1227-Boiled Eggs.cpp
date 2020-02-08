#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,k,l,n,m,t,p,q,c=0;
    cin>>t;
    while (t--) {
        cin>>n>>p>>q;
        int arr[100];
        for (i=0;i<n;i++)cin>>arr[i];
        sort (arr,arr+n);
        int f=0;
        for (i= 0; i<min(p,n);i++){
            q -=arr[i];
            if(q>=0)f++;
        }

        printf("Case %d: %d\n",++c,f);
    }
    return 0;
}
