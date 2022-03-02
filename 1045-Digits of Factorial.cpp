#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii acos(-1.0)
double arr[1000005];

int main()
{
    ll i=0,t;
    cin>>t;
    for(int j=1;j<=1000000;j++){
            arr[j]=arr[j-1]+log(j);
        }
    while(t--){
        i++;
        ll n,b;
        cin>>n>>b;
        ll sum;
        sum=arr[n]/log(b);
        printf("Case %lld: ",i);
        printf("%lld\n",sum+1);
    }
}
