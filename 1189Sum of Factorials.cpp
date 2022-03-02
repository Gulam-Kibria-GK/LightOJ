#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 10000007
ll a,b,c,d,e,n,m;


long long int fac(long long int n)
{
    if(n==0)
    {
        return 1;
    }
    else
        return n*fac(n-1);
}


int main()
{
    ll i,j,k=0;
    //cin>>a;
    ll arr[25],arr2[25];
    for(i=0; i<=20; i++)
    {
        arr[i]=fac(i);
    }
    cin>>a;
    while(a--)
    {
        k++;
        cin>>n;
        m=n;
        ll h=0;
        for(i=20; i>=0; i--)
        {
            if(arr[i]<=n)
            {
                arr2[h++]=i;
                n-=arr[i];
            }
        }
        ll ans=0;
        for(i=h-1; i>=0; i--)
        {
            ans+=(arr[arr2[i]]);
        }
        cout<<"Case "<<k<<": ";
        if(ans==m)
        {
            for(i=h-1; i>=0; i--)
            {
                cout<<arr2[i]<<"!";
                if(i!=0){
                    cout<<"+";
                }
            }
            cout<<endl;
        }
        else{
            cout<<"impossible"<<endl;
        }
    }
}
