#include<bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll>mm,mm2;
struct stt
{
    ll arr[1000];
};

int main()
{
    ll i,j,k,n,m,a,b,c,t=0;
    cin>>k;
    while(k--)
    {
        cin>>n>>m>>a;
        stt v[n+2];
        for(i=0; i<n; i++)
        {
            for(j=0; j<a; j++)
            {
                cin>>b;
                v[i].arr[j]=b;
            }
        }
        ll kk;
        cin>>kk;
        for(i=0;i<kk;i++){
            cin>>b;
            mm[b]++;
        }
        ll ck=1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<a; j++)
            {
                ll aa=v[i].arr[j];
                if(aa>0 && mm[aa]>0){
                    break;
                }
                else if(aa<0 && mm[(aa*-1)]==0){
                    break;
                }
                if(j==a-1){
                    ck=0;
                    goto ans;
                }
            }
        }
        ans:
        t++;
        cout<<"Case "<<t<<": ";
        if(ck){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        mm.clear();
    }
}
