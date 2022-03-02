#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct fun{
    ll a,b;
};

fun arr[1010];

void solve(ll n){
    ll i,j,c=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
            c++;
    }
    arr[n].a=n;
    arr[n].b=c;
}

bool myfun(fun aa,fun bb){
    if(aa.b==bb.b)
        return aa.a>bb.a;
    else
        return aa.b<bb.b;
}

int main()
{
    ll i,j,k=0,n,m,a,b;
    cin>>j;
    for(i=1;i<=1000;i++){
        solve(i);
    }
    sort(arr,arr+1001,myfun);
//    for(i=1;i<1001;i++){
//        cout<<arr[i].a<<" "<<arr[i].b<<endl;
//    }
    while(j--){
        k++;
        cin>>m;
        cout<<"Case "<<k<<": "<<arr[m].a<<endl;
    }

}
